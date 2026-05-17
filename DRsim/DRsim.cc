#include <iostream>
#include "DRsimDetectorConstruction.hh"
#include "DRsimActionInitialization.hh"

#include "G4RunManagerFactory.hh"
#include "G4UImanager.hh"
#include "G4OpticalPhysics.hh"
#include "G4OpticalParameters.hh"
#include "FTFP_BERT.hh"
#include "Randomize.hh"

#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

int main(int argc, char** argv) {
  G4UIExecutive* ui = 0;
  if ( argc == 1 ) ui = new G4UIExecutive(argc, argv);

  G4int seed = 0;
  G4String filename;
  if (argc > 2) seed = atoi(argv[2]);
  if (argc > 3) filename = argv[3];

  CLHEP::HepRandom::setTheEngine(new CLHEP::RanecuEngine);
  CLHEP::HepRandom::setTheSeed(seed);

  auto* runManager = G4RunManagerFactory::CreateRunManager(G4RunManagerType::Default);

  // Mandatory user initialization classes
  runManager->SetUserInitialization(new DRsimDetectorConstruction());

  // physics module
  G4VModularPhysicsList* physicsList = new FTFP_BERT;
  G4OpticalPhysics* opticalPhysics = new G4OpticalPhysics();
  physicsList->RegisterPhysics(opticalPhysics);

  auto* optParams = G4OpticalParameters::Instance();
  optParams->SetBoundaryInvokeSD(true);
  optParams->SetProcessActivation("Cerenkov", false);
  optParams->SetProcessActivation("Scintillation", false);
  optParams->SetCerenkovTrackSecondariesFirst(false);
  optParams->SetScintTrackSecondariesFirst(false);

  runManager->SetUserInitialization(physicsList);

  // User action initialization
  runManager->SetUserInitialization(new DRsimActionInitialization(seed,filename));

  G4VisManager* visManager = new G4VisExecutive;
  if ( argc == 1 ) visManager->Initialize();
  G4UImanager* UImanager = G4UImanager::GetUIpointer();

  if ( argc != 1 ) {
    // execute an argument macro file if exist
    G4String command = "/control/execute ";
    G4String fileName = argv[1];
    UImanager->ApplyCommand(command+fileName);
  } else {
    UImanager->ApplyCommand("/control/execute init_vis.mac");
    if (ui->IsGUI()) { UImanager->ApplyCommand("/control/execute gui.mac"); }
    ui->SessionStart();
    delete ui;
  }

  delete visManager;
  delete runManager;

  return 0;
}

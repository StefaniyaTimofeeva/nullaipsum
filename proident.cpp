APawn* ThePawn = gamestate->PlayerArray[i]->GetPawn();
APlayerMallet* mallet = Cast<APlayerMallet>(ThePawn);
if (!mallet) {
    // return or error handle
}
mallet->DoStuff();

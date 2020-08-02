bool Game::checkWinCondition() const {
    return player_->GetMoney() >= final_goal_;
}

bool Game::checkLooseCodition() const {
    return player_->GetMoney() == SIZE_MAX;
}

void Game::printMenu() {
    std::cout << "Money: " << player_->GetMoney() 
              << " Day: " << time_->GetElpasedTime()
              << " Days left: " << days_ - time_->GetElpasedTime()
              << " Current position: " 
              << map_->GetCurrentPosition()->GetCoordinates() << "\n";
}

void Game::printOptions() {
    std::cout << "\n"
              << "1) Travel\n"
              << "2) Sell\n"
              << "3) Buy\n"
              << "4) Check Cargo\n"
              << "0) Exit\n\n"
              << "Choice: ";
}

void Game::printWinScreen() {
    system("cls");
    std::cout << "CONGRATULATIUON! You earn: " << player_->GetMoney()
              << " money in: " << time_->GetElpasedTime() << " days";
    std::this_thread::sleep_for(5s);
}

void Game::printLooseScreen() {
    system("cls");
    std::cout << "GAME OVER! You earn: " << player_->GetMoney()
              << " money in: " << time_->GetElpasedTime() << " days";
    std::this_thread::sleep_for(5s);
}

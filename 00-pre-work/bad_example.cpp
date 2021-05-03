bool Game::check() const {return player_->GetMoney()>=final_goal_;}

bool Game::check2() const {return player_->GetMoney() == SIZE_MAX;}

void Game::Print() {std::cout << "Money: " << player_->GetMoney() << " Day: " << time_->GetElpasedTime()<< " Days left: " << days_ - time_->GetElpasedTime()<< " Current position: " << map_->GetCurrentPosition()->GetCoordinates() << "\n";}

void Game::Print2() {std::cout << "\n" << "1) Travel\n" << "2) Sell\n" << "3) Buy\n"<< "4) Check Cargo\n" << "0) Exit\n\n" << "Choice: ";}

void Game::Print3() {system("cls"); 
std::cout << "CONGRATULATIUON! You earn: " << player_->GetMoney() << " money in: " << time_->GetElpasedTime() << " days";
std::this_thread::sleep_for(5s);}

void Game::PrintLooseScreen() {system("cls");
std::cout << "GAME OVER! You earn: " << player_->GetMoney() << " money in: " << time_->GetElpasedTime() << " days";
std::this_thread::sleep_for(5s);}

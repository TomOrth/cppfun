#include "Command.h"
#include "Drive.h"

int main(){
    Command* cmd = new Command();
    Drive* drive = new Drive(); 
    cmd = drive;
    cmd->run();
}

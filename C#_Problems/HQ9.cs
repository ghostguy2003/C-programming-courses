    string one;
    
    if (code=="H"){
      one="Hello World!";
      return one;
    }
    
    else if(code=="Q"){
      return code;
    }
    
    else if(code=="9"){
      string song="";
      for (int i=99;i>2;i--){
      song+=$"{i} bottles of beer on the wall, {i} bottles of beer.\n";
      song+=$"Take one down and pass it around, {i-1} bottles of beer on the wall.\n";
      }
      song+=$"2 bottles of beer on the wall, 2 bottles of beer.\n";
      song+=$"Take one down and pass it around, 1 bottle of beer on the wall.\n";
      song+=$"1 bottle of beer on the wall, 1 bottle of beer.\n";
      song+=$"Take one down and pass it around, no more bottles of beer on the wall.\n";
      song+=$"No more bottles of beer on the wall, no more bottles of beer.\n";
      song+=$"Go to the store and buy some more, 99 bottles of beer on the wall.";
      return song;

    }else{
      return null;
    }
  }
}

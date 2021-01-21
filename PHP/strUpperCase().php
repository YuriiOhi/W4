<?php
   function strUpperCase( &$str ) {
       for ( $i = 0, $upper = $str[$i]; isset($str[$i]); $i++ ) {
        $upper = $str[$i];
        if ( $upper > '`' && $upper < '{' ) {
            $upper = chr( ord($upper)- 32 );
            $str[$i] = $upper;
        }
       }
    }

    $str = "my name";
    strUpperCase($str);
    
    echo $str . PHP_EOL ;
?>

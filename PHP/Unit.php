<?php
     
   class Unit {
        private $damage;
        private $hitPoints;
        private $hitPointsLimit;
        private $name;
        
        public function Unit($name, $hp, $dmg) {
            $this->name = $name;
            $this->hitPoints = $hp;
            $this->hitPointsLimit = $hp;
            $this->damage = $dmg;
            
        }
       
       public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute [ $name ] not found");
        }
       
        private function ensureIsAlive() {
            if ( $this->hitPoints == 0 ) {
                throw new Exception("Error: Unit Is Dead");
            }
        }
        public function addHitPoints($hp) {
            self::ensureIsAlive();
            $hitPointsNeeded = $this->hitPointsLimit - $this->hitPoints;

            if ( $hitPointsNeeded <= $hp ) {
                $this->hitPoints += $hp;
            } else {
                $this->hitPoints = $this->hitPointsLimit;
            }
        }
        public function takeDamage($dmg) {
            self::ensureIsAlive();
            if ( $dmg >= $this->hitPoints ) {
                $this->hitPoints = 0;
            } else {
                $this->hitPoints -= $dmg;
            }
        }
        public function attack(&$enemy) {
            $enemy->ensureIsAlive();
            $enemy->takeDamage($this->damage);
            $enemy->counterAttack($this);
        }
        public function counterAttack(&$enemy) {
            self::ensureIsAlive();
            $enemy->takeDamage($this->damage / 2);
        }
        public function __toString() {
            return sprintf("Name: %s, Hitpoints: %d/%d, Damage: %d", $this->name, $this->hitPoints, $this->hitPointsLimit, $this->damage);
        }
    }
    
    
    $soldier = new Unit("Soldier", 20, 20);
    $rogue = new Unit("Rogue", 21, 25);

    echo $soldier . PHP_EOL;
    echo $rogue . PHP_EOL;
    echo "soldier->attack(rogue)" . PHP_EOL;
    $soldier->attack($rogue);

    echo $soldier . PHP_EOL;
    echo $rogue . PHP_EOL;
    echo "soldier->attack(rogue)" . PHP_EOL;
    $soldier->attack($rogue);

    echo $soldier . PHP_EOL;
    echo $rogue . PHP_EOL;
?>

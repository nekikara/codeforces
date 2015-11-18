$C = {
  a: 0,
  b: 1,
  c: 2,
  d: 3,
  e: 4,
  f: 5,
  g: 6,
  h: 7,
}
$R = {
  7 => 0,
  6 => 1,
  5 => 2,
  4 => 3,
  3 => 4,
  2 => 5,
  1 => 6,
  0 => 7,
}


def to_cordinate(str)
  return Cordinate.new($C[str[0].to_sym], $R[(str[1].to_i - 1)])
end

class Cordinate
  attr_accessor :x, :y

  def initialize(x, y)
    @x = x
    @y = y
  end

  def to_chess_str
    "#{$C.key(x).to_s}#{$R.key(y).to_i + 1}"
  end
end

class Piece
  attr_accessor :pos
  def initialize(cordinate)
    @pos = cordinate
    @dire = []
  end
  def move(dire)
    if @pos.x < dire.x
      dx = 'r'
    else
      dx = 'l'
    end
    if @pos.y < dire.y
      dy = 'u'
    else
      dy = 'd'
    end
    self.send("#{dx}#{dy}")
  end

  def lu
    @pos.x -= 1
    @pos.y += 1
    @dire << "LU"
  end
  def u
    @pos.y += 1
    @dire << "U"
  end
  def ru
    @pos.x += 1
    @pos.y += 1
    @dire << "RU"
  end
  def l
    @pos.x -= 1
    @dire << "L"
  end
  def r
    @pos.x += 1
    @dire << "R"
  end
  def ld
    @pos.x -= 1
    @pos.y -= 1
    @dire << "LD"
  end
  def d
    @pos.y -= 1
    @dire << "D"
  end
  def rd
    @pos.x += 1
    @pos.y -= 1
    @dire << "RD"
  end
end

class Chess
  attr_accessor :c
  def initialize
    @board = Array.new(8, 0) { Array.new(8, 0 )}
  end

  def start(s, g)
    @c = Position.new(s)
    @g = g
    @count = 0
  end

  def end?
    @c.pos.x == @g.x && @c.pos.y == @g.y
  end

  def step
    @c.move(@g)
  end
end


piece = gets
goal = gets

s = to_cordinate(piece)
g = to_cordinate(goal)

chess = Chess.new.start(s, g)

while chess.end?
  chess.step
end

puts chess.c.pos.x

typedef long long ll ;
class Box
{
private:
   int l,b,h;
public:
   Box()
   {
      l=0;
      h=0;
      b=0;
   }
   Box(int length,int breadth,int height)
   {
      l=length;
      b=breadth;
      h=height;
   }
   Box(const Box& B)
   {
       l=B.l;
       h=B.h;
       b=B.b;
   }
   int getLength()
   {
      return l;
   }
   int getBreadth()
   {
      return b;
   }
   int getHeight()
   {
      return h;
   }
   unsigned long long CalculateVolume()
   {
      return ll(l) * b * h;
   }

   friend bool operator < ( Box& A, Box& B)
   {
      if( (A.l<B.l) || (A.b<B.b && A.l==B.l) || (A.h<B.h && A.b==B.b && A.l==B.l))
      {
         return true;
      }
      else
      {
         return false;
      }
   }
   friend ostream& operator << (ostream& out, Box& B)
   {
      out<<B.l<<" "<<B.b<<" "<<B.h;
      return out;
   }
};


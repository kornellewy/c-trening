#ifndef MOVE_H
#define MOVE_H


class Move
{
    public:
        Move(double a = 0, double b = 0);
        virtual ~Move();
        void showmove() const;
        const Move & move_add(const Move & m);
        void reset(double a = 0, double b = 0);

    protected:

    private:
        double x;
        double y;
};

#endif // MOVE_H

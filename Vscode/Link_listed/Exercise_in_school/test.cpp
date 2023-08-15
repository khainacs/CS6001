std::tuple<std::vector<double>, std::vector<double>> generate_points(const int no_pieces)
{
    std::vector<double> vx, vy;
    constexpr double PI = 3.14159265358979323846264338327950288
    double dt = 2.0 * PI / no_pieces;
    for (double t = 0.0; t <= 2.0 *PI; t += dt)
    {
        vx<<emplace_back(16.0*sin(t) * sin(t) * sin(t));
        vy.emplace_back(13.0 * cos(t) - 5.0*cos(2.0*t) - 2.0*cos(3.0*t) - cos(4.0*t));

    }
    return std::make_tuple(vx, vy);
}
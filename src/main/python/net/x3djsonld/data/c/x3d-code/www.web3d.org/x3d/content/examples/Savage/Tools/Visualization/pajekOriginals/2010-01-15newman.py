###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='3. C:\Users\Elaine\Desktop\haiti_apan_lla2\Pajek Files\2010-01-15.net (270)',name='title'),
    meta(content='3-28-2011',name='created'),
    meta(content='Vladimir Batagelj and Andrej Mrvar - program package Pajek: http://vlado.fmf.uni-lj.si/pub/networks/pajek/',name='generator')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1.0000,1.0000,1.0000)]),
    Transform(rotation=(-22.35120,0.00000,112.43585,1.85460),translation=(-0.64874,-0.42896,-0.66276),
      children=[
      Shape(
        #  Arc 1.23 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19413,radius=0.02000))]),
    Transform(rotation=(-22.35120,0.00000,112.43585,1.85460),translation=(-1.06026,-0.55134,-0.74457),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-11.22472,0.00000,52.81325,2.15598),translation=(-0.35062,-0.44066,-0.60713),
      children=[
      Shape(
        #  Arc 1.24 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64770,radius=0.02000))]),
    Transform(rotation=(-11.22472,0.00000,52.81325,2.15598),translation=(-0.48422,-0.53116,-0.63552),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.23500,0.00000,8.51149,0.43344),translation=(-0.12911,0.32068,-0.81718),
      children=[
      Shape(
        #  Arc 1.26 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.28361,radius=0.02000))]),
    Transform(rotation=(-53.23500,0.00000,8.51149,0.43344),translation=(-0.16106,0.75793,-1.01700),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-95.76386,0.00000,53.68924,1.79233),translation=(-0.35500,-0.38541,-1.02982),
      children=[
      Shape(
        #  Arc 1.39 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.12537,radius=0.02000))]),
    Transform(rotation=(-95.76386,0.00000,53.68924,1.79233),translation=(-0.54712,-0.47389,-1.37249),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(48.75144,-0.00000,90.05128,1.95648),translation=(-0.53681,-0.46966,-0.30725),
      children=[
      Shape(
        #  Arc 1.44 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.10519,radius=0.02000))]),
    Transform(rotation=(48.75144,-0.00000,90.05128,1.95648),translation=(-0.85670,-0.61735,-0.13407),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-55.36428,0.00000,34.38022,1.79172),translation=(-0.25846,-0.33496,-0.82783),
      children=[
      Shape(
        #  Arc 1.49 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66794,radius=0.02000))]),
    Transform(rotation=(-55.36428,0.00000,34.38022,1.79172),translation=(-0.34800,-0.37309,-0.97203),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-46.30303,0.00000,108.25743,1.75207),translation=(-0.62784,-0.36968,-0.78252),
      children=[
      Shape(
        #  Arc 1.55 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19705,radius=0.02000))]),
    Transform(rotation=(-46.30303,0.00000,108.25743,1.75207),translation=(-1.02443,-0.44875,-0.95215),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(51.97689,-0.00000,44.63085,1.57991),translation=(-0.30971,-0.26490,-0.29112),
      children=[
      Shape(
        #  Arc 1.56 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68512,radius=0.02000))]),
    Transform(rotation=(51.97689,-0.00000,44.63085,1.57991),translation=(-0.42864,-0.26656,-0.15262),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(1.17675,0.00000,-71.83137,1.91260),translation=(0.27260,-0.38957,-0.54512),
      children=[
      Shape(
        #  Arc 1.58 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.76252,radius=0.02000))]),
    Transform(rotation=(1.17675,0.00000,-71.83137,1.91260),translation=(0.48103,-0.46374,-0.54171),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-91.31316,0.00000,-91.39963,2.01731),translation=(0.37044,-0.57105,-1.00757),
      children=[
      Shape(
        #  Arc 1.66 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.43241,radius=0.02000))]),
    Transform(rotation=(-91.31316,0.00000,-91.39963,2.01731),translation=(0.72535,-0.81124,-1.36214),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-75.56031,0.00000,92.16901,1.67603),translation=(-0.54740,-0.32472,-0.92881),
      children=[
      Shape(
        #  Arc 1.68 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19846,radius=0.02000))]),
    Transform(rotation=(-75.56031,0.00000,92.16901,1.67603),translation=(-0.88520,-0.37086,-1.20573),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(36.53063,0.00000,-89.21894,0.86295),translation=(0.35954,0.15075,-0.36835),
      children=[
      Shape(
        #  Arc 1.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.26892,radius=0.02000))]),
    Transform(rotation=(36.53063,0.00000,-89.21894,0.86295),translation=(0.69314,0.45925,-0.23176),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-9.60126,0.00000,28.92563,1.46760),translation=(-0.23118,-0.24600,-0.59901),
      children=[
      Shape(
        #  Arc 1.70 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.30640,radius=0.02000))]),
    Transform(rotation=(-9.60126,0.00000,28.92563,1.46760),translation=(-0.22477,-0.24670,-0.59688),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.71922,0.00000,47.01569,0.89619),translation=(-0.32163,-0.07318,-0.56960),
      children=[
      Shape(
        #  Arc 1.71 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60391,radius=0.02000))]),
    Transform(rotation=(-3.71922,0.00000,47.01569,0.89619),translation=(-0.43215,0.01549,-0.57834),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-103.13551,0.00000,54.29686,1.75787),translation=(-0.35804,-0.37209,-1.06668),
      children=[
      Shape(
        #  Arc 1.73 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.18625,radius=0.02000))]),
    Transform(rotation=(-103.13551,0.00000,54.29686,1.75787),translation=(-0.55629,-0.45265,-1.44325),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-54.10207,0.00000,105.08376,1.73073),translation=(-0.61197,-0.35711,-0.82152),
      children=[
      Shape(
        #  Arc 1.75 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19721,radius=0.02000))]),
    Transform(rotation=(-54.10207,0.00000,105.08376,1.73073),translation=(-0.99696,-0.42696,-1.01972),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-75.56031,0.00000,92.16901,1.67603),translation=(-0.54740,-0.32472,-0.92881),
      children=[
      Shape(
        #  Arc 1.80 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19846,radius=0.02000))]),
    Transform(rotation=(-75.56031,0.00000,92.16901,1.67603),translation=(-0.88520,-0.37086,-1.20573),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-61.22588,0.00000,49.07388,2.31042),translation=(-0.33193,-0.61974,-0.85714),
      children=[
      Shape(
        #  Arc 1.88 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.06218,radius=0.02000))]),
    Transform(rotation=(-61.22588,0.00000,49.07388,2.31042),translation=(-0.50337,-0.86986,-1.07104),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-16.72079,0.00000,37.32166,2.32792),translation=(-0.27316,-0.45501,-0.63461),
      children=[
      Shape(
        #  Arc 1.89 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.56267,radius=0.02000))]),
    Transform(rotation=(-16.72079,0.00000,37.32166,2.32792),translation=(-0.35365,-0.53835,-0.67067),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-15.64003,0.00000,91.66205,2.13858),translation=(-0.54487,-0.55833,-0.62921),
      children=[
      Shape(
        #  Arc 1.90 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.10292,radius=0.02000))]),
    Transform(rotation=(-15.64003,0.00000,91.66205,2.13858),translation=(-0.87020,-0.76884,-0.68472),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-34.49226,0.00000,28.69624,2.32062),translation=(-0.23004,-0.47070,-0.72347),
      children=[
      Shape(
        #  Arc 1.103 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61312,radius=0.02000))]),
    Transform(rotation=(-34.49226,0.00000,28.69624,2.32062),translation=(-0.29863,-0.57058,-0.80592),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.78421,0.00000,18.25664,1.07163),translation=(-0.17784,-0.10694,-0.81993),
      children=[
      Shape(
        #  Arc 1.117 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64692,radius=0.02000))]),
    Transform(rotation=(-53.78421,0.00000,18.25664,1.07163),translation=(-0.22397,-0.02869,-0.95582),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(1.77559,-0.00000,16.35923,0.74567),translation=(-0.16835,-0.17269,-0.54213),
      children=[
      Shape(
        #  Arc 1.124 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.24254,radius=0.02000))]),
    Transform(rotation=(1.77559,-0.00000,16.35923,0.74567),translation=(-0.14223,-0.20114,-0.54496),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.22121,0.00000,39.57865,1.73205),translation=(-0.28445,-0.31572,-0.81711),
      children=[
      Shape(
        #  Arc 1.125 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.67196,radius=0.02000))]),
    Transform(rotation=(-53.22121,0.00000,39.57865,1.73205),translation=(-0.38810,-0.34398,-0.95649),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-95.76259,0.00000,53.80093,1.79083),translation=(-0.35556,-0.38461,-1.02982),
      children=[
      Shape(
        #  Arc 1.128 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.12555,radius=0.02000))]),
    Transform(rotation=(-95.76259,0.00000,53.80093,1.79083),translation=(-0.54809,-0.47252,-1.37250),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.02016,-0.00000,49.31128,2.27982),translation=(-0.33311,-0.47438,-0.52590),
      children=[
      Shape(
        #  Arc 1.131 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65305,radius=0.02000))]),
    Transform(rotation=(5.02016,-0.00000,49.31128,2.27982),translation=(-0.45885,-0.58280,-0.51310),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-47.41887,0.00000,69.71455,2.29882),translation=(-0.43513,-0.63755,-0.78810),
      children=[
      Shape(
        #  Arc 1.147 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.12946,radius=0.02000))]),
    Transform(rotation=(-47.41887,0.00000,69.71455,2.29882),translation=(-0.68494,-0.90686,-0.95802),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.68971,-0.00000,81.66135,2.29375),translation=(-0.49486,-0.62570,-0.49256),
      children=[
      Shape(
        #  Arc 1.152 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.10013,radius=0.02000))]),
    Transform(rotation=(11.68971,-0.00000,81.66135,2.29375),translation=(-0.78440,-0.88377,-0.45111),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.37791,0.00000,-65.23328,2.11032),translation=(0.23961,-0.45734,-0.56790),
      children=[
      Shape(
        #  Arc 1.155 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.76135,radius=0.02000))]),
    Transform(rotation=(-3.37791,0.00000,-65.23328,2.11032),translation=(0.42869,-0.57071,-0.57769),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-85.13596,0.00000,54.26538,2.06828),translation=(-0.35788,-0.53591,-0.97669),
      children=[
      Shape(
        #  Arc 1.157 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.14886,radius=0.02000))]),
    Transform(rotation=(-85.13596,0.00000,54.26538,2.06828),translation=(-0.55364,-0.73368,-1.28380),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58522,0.00000,-0.93369,2.97423),translation=(-0.08189,-0.40027,-0.57393),
      children=[
      Shape(
        #  Arc 1.167 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.28090,radius=0.02000))]),
    Transform(rotation=(-4.58522,0.00000,-0.93369,2.97423),translation=(-0.08254,-0.38099,-0.57074),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-55.36728,0.00000,34.34280,1.79253),translation=(-0.25827,-0.33522,-0.82784),
      children=[
      Shape(
        #  Arc 1.173 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66788,radius=0.02000))]),
    Transform(rotation=(-55.36728,0.00000,34.34280,1.79253),translation=(-0.34771,-0.37347,-0.97204),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-47.41887,0.00000,69.71455,2.29882),translation=(-0.43513,-0.63755,-0.78810),
      children=[
      Shape(
        #  Arc 1.179 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.12946,radius=0.02000))]),
    Transform(rotation=(-47.41887,0.00000,69.71455,2.29882),translation=(-0.68494,-0.90686,-0.95802),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(8.57484,-0.00000,42.64387,2.41082),translation=(-0.29978,-0.50442,-0.50813),
      children=[
      Shape(
        #  Arc 1.187 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65170,radius=0.02000))]),
    Transform(rotation=(8.57484,-0.00000,42.64387,2.41082),translation=(-0.40830,-0.62792,-0.48631),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.15959,-0.00000,30.58324,0.39752),translation=(-0.23947,0.31134,-0.36521),
      children=[
      Shape(
        #  Arc 1.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.24316,radius=0.02000))]),
    Transform(rotation=(37.15959,-0.00000,30.58324,0.39752),translation=(-0.35303,0.73693,-0.22724),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(1.11047,-0.00000,47.12438,2.25366),translation=(-0.32218,-0.45349,-0.54545),
      children=[
      Shape(
        #  Arc 1.190 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60762,radius=0.02000))]),
    Transform(rotation=(1.11047,-0.00000,47.12438,2.25366),translation=(-0.43371,-0.54424,-0.54283),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-46.86208,0.00000,-4.78796,1.87477),translation=(-0.06262,-0.33566,-0.78532),
      children=[
      Shape(
        #  Arc 1.191 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.49369,radius=0.02000))]),
    Transform(rotation=(-46.86208,0.00000,-4.78796,1.87477),translation=(-0.05419,-0.36166,-0.86775),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(15.71587,-0.00000,75.36439,2.40388),translation=(-0.46338,-0.68528,-0.47243),
      children=[
      Shape(
        #  Arc 1.196 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.14460,radius=0.02000))]),
    Transform(rotation=(15.71587,-0.00000,75.36439,2.40388),translation=(-0.73485,-0.99039,-0.41582),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-23.79479,0.00000,32.61293,2.73553),translation=(-0.24962,-0.73125,-0.66998),
      children=[
      Shape(
        #  Arc 1.210 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02205,radius=0.02000))]),
    Transform(rotation=(-23.79479,0.00000,32.61293,2.73553),translation=(-0.36163,-1.05373,-0.75170),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-35.21076,0.00000,-42.84178,0.81125),translation=(0.12765,0.00152,-0.72706),
      children=[
      Shape(
        #  Arc 1.211 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.76473,radius=0.02000))]),
    Transform(rotation=(-35.21076,0.00000,-42.84178,0.81125),translation=(0.25223,0.15464,-0.82944),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(0.05599,0.00000,-59.47822,1.96853),translation=(0.21084,-0.38672,-0.55073),
      children=[
      Shape(
        #  Arc 1.219 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64514,radius=0.02000))]),
    Transform(rotation=(0.05599,0.00000,-59.47822,1.96853),translation=(0.36072,-0.44969,-0.55058),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-22.35120,0.00000,112.43585,1.85460),translation=(-0.64874,-0.42896,-0.66276),
      children=[
      Shape(
        #  Arc 1.225 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19413,radius=0.02000))]),
    Transform(rotation=(-22.35120,0.00000,112.43585,1.85460),translation=(-1.06026,-0.55134,-0.74457),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.44547,0.00000,107.69674,2.00383),translation=(-0.62504,-0.51072,-0.55323),
      children=[
      Shape(
        #  Arc 1.226 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.18650,radius=0.02000))]),
    Transform(rotation=(-0.44547,0.00000,107.69674,2.00383),translation=(-1.01829,-0.69253,-0.55486),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.68936,0.00000,2.06197,2.89156),translation=(-0.09687,-0.53282,-0.61945),
      children=[
      Shape(
        #  Arc 1.227 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55949,radius=0.02000))]),
    Transform(rotation=(-13.68936,0.00000,2.06197,2.89156),translation=(-0.10128,-0.64884,-0.64875),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.45881,0.00000,-62.57151,2.01007),translation=(0.22630,-0.41123,-0.49371),
      children=[
      Shape(
        #  Arc 1.229 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.70285,radius=0.02000))]),
    Transform(rotation=(11.45881,0.00000,-62.57151,2.01007),translation=(0.39672,-0.49264,-0.46250),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.10689,0.00000,-69.41298,0.85600),translation=(0.26051,0.12015,-0.28047),
      children=[
      Shape(
        #  Arc 1.232 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16535,radius=0.02000))]),
    Transform(rotation=(54.10689,0.00000,-69.41298,0.85600),translation=(0.51227,0.39719,-0.08422),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-92.11702,0.00000,64.05055,1.71578),translation=(-0.40681,-0.34369,-1.01159),
      children=[
      Shape(
        #  Arc 1.234 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13386,radius=0.02000))]),
    Transform(rotation=(-92.11702,0.00000,64.05055,1.71578),translation=(-0.63668,-0.40248,-1.34219),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(16.25369,-0.00000,68.53602,2.43736),translation=(-0.42924,-0.67633,-0.46974),
      children=[
      Shape(
        #  Arc 1.236 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.08792,radius=0.02000))]),
    Transform(rotation=(16.25369,-0.00000,68.53602,2.43736),translation=(-0.67112,-0.96895,-0.41237),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(110.89521,-0.00000,2.40308,0.87563),translation=(-0.09857,0.20079,0.00347),
      children=[
      Shape(
        #  Arc 1.241 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.44438,radius=0.02000))]),
    Transform(rotation=(110.89521,-0.00000,2.40308,0.87563),translation=(-0.10792,0.56088,0.43510),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(121.75596,-0.00000,20.17553,1.04335),translation=(-0.18743,0.09766,0.05777),
      children=[
      Shape(
        #  Arc 1.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.42827,radius=0.02000))]),
    Transform(rotation=(121.75596,-0.00000,20.17553,1.04335),translation=(-0.26571,0.37657,0.53016),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.65093,0.00000,5.59944,2.63525),translation=(-0.11455,-0.39481,-0.61926),
      children=[
      Shape(
        #  Arc 1.252 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.30423,radius=0.02000))]),
    Transform(rotation=(-13.65093,0.00000,5.59944,2.63525),translation=(-0.11310,-0.38791,-0.61572),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.70898,0.00000,-72.40231,2.01553),translation=(0.27546,-0.47659,-0.81955),
      children=[
      Shape(
        #  Arc 1.253 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.99863,radius=0.02000))]),
    Transform(rotation=(-53.70898,0.00000,-72.40231,2.01553),translation=(0.52146,-0.62257,-1.00204),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.49354,0.00000,-51.63599,0.88855),translation=(0.17162,0.01245,-0.33354),
      children=[
      Shape(
        #  Arc 1.255 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.86983,radius=0.02000))]),
    Transform(rotation=(43.49354,0.00000,-51.63599,0.88855),translation=(0.33482,0.18580,-0.19607),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(15.71587,-0.00000,75.36439,2.40388),translation=(-0.46338,-0.68528,-0.47243),
      children=[
      Shape(
        #  Arc 1.270 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.14460,radius=0.02000))]),
    Transform(rotation=(15.71587,-0.00000,75.36439,2.40388),translation=(-0.73485,-0.99039,-0.41582),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(46.24633,0.00000,-42.30430,1.37860),translation=(1.49678,1.25805,0.90402),
      children=[
      Shape(
        #  Arc 2.21 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63853,radius=0.02000))]),
    Transform(rotation=(46.24633,0.00000,-42.30430,1.37860),translation=(1.60230,1.28847,1.01937),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.04323,0.00000,-37.09407,1.64088),translation=(1.47073,1.17406,0.94301),
      children=[
      Shape(
        #  Arc 2.22 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65710,radius=0.02000))]),
    Transform(rotation=(54.04323,0.00000,-37.09407,1.64088),translation=(1.56588,1.16226,1.08163),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-95.31359,0.00000,-24.24878,1.64001),translation=(1.40650,1.16297,0.19622),
      children=[
      Shape(
        #  Arc 2.28 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.98586,radius=0.02000))]),
    Transform(rotation=(-95.31359,0.00000,-24.24878,1.64001),translation=(1.48839,1.13995,-0.12566),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(39.22838,0.00000,-72.79958,0.82050),translation=(1.64926,1.58249,0.86893),
      children=[
      Shape(
        #  Arc 2.31 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13052,radius=0.02000))]),
    Transform(rotation=(39.22838,0.00000,-72.79958,0.82050),translation=(1.91022,1.85882,1.00955),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.93816,0.00000,-15.82672,1.07713),translation=(1.36439,1.24255,0.70248),
      children=[
      Shape(
        #  Arc 2.34 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.19196,radius=0.02000))]),
    Transform(rotation=(5.93816,0.00000,-15.82672,1.07713),translation=(1.31161,1.21221,0.68268),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.15813,0.00000,-54.29821,1.22004),translation=(1.55675,1.29848,0.72858),
      children=[
      Shape(
        #  Arc 2.51 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59027,radius=0.02000))]),
    Transform(rotation=(11.15813,0.00000,-54.29821,1.22004),translation=(1.68106,1.34491,0.75413),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(51.13774,0.00000,-39.29418,1.46917),translation=(1.48173,1.22995,0.92848),
      children=[
      Shape(
        #  Arc 2.52 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64826,radius=0.02000))]),
    Transform(rotation=(51.13774,0.00000,-39.29418,1.46917),translation=(1.58122,1.24660,1.05795),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-41.03858,0.00000,-5.48726,1.80323),translation=(1.31270,1.14806,0.46760),
      children=[
      Shape(
        #  Arc 2.60 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.42548,radius=0.02000))]),
    Transform(rotation=(-41.03858,0.00000,-5.48726,1.80323),translation=(1.31950,1.13591,0.41673),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(53.95007,-0.00000,33.77096,1.53925),translation=(1.11640,1.20711,0.94254),
      children=[
      Shape(
        #  Arc 2.62 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63680,radius=0.02000))]),
    Transform(rotation=(53.95007,-0.00000,33.77096,1.53925),translation=(1.03240,1.21210,1.07674),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(31.54877,0.00000,-10.44537,0.61972),translation=(1.33749,1.42996,0.83053),
      children=[
      Shape(
        #  Arc 2.67 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57218,radius=0.02000))]),
    Transform(rotation=(31.54877,0.00000,-10.44537,0.61972),translation=(1.36050,1.53260,0.90006),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-85.84895,0.00000,47.96261,2.14329),translation=(1.04545,0.88017,0.24355),
      children=[
      Shape(
        #  Arc 2.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16993,radius=0.02000))]),
    Transform(rotation=(-85.84895,0.00000,47.96261,2.14329),translation=(0.87123,0.64996,-0.06829),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(95.41586,0.00000,-66.21081,1.54926),translation=(1.61631,1.20957,1.14987),
      children=[
      Shape(
        #  Arc 2.72 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16165,radius=0.02000))]),
    Transform(rotation=(95.41586,0.00000,-66.21081,1.54926),translation=(1.85617,1.21863,1.49553),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-33.64254,0.00000,74.02792,0.99937),translation=(0.91512,1.45848,0.50458),
      children=[
      Shape(
        #  Arc 2.79 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96672,radius=0.02000))]),
    Transform(rotation=(-33.64254,0.00000,74.02792,0.99937),translation=(0.66750,1.63337,0.39205),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.04323,0.00000,-37.09407,1.64088),translation=(1.47073,1.17406,0.94301),
      children=[
      Shape(
        #  Arc 2.82 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65710,radius=0.02000))]),
    Transform(rotation=(54.04323,0.00000,-37.09407,1.64088),translation=(1.56588,1.16226,1.08163),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-18.97866,0.00000,-79.38313,0.81908),translation=(1.68218,1.57857,0.57790),
      children=[
      Shape(
        #  Arc 2.84 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.11730,radius=0.02000))]),
    Transform(rotation=(-18.97866,0.00000,-79.38313,0.81908),translation=(1.96541,1.85080,0.51018),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-42.73375,0.00000,-1.11397,1.14105),translation=(1.29083,1.29503,0.45912),
      children=[
      Shape(
        #  Arc 2.85 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.47024,radius=0.02000))]),
    Transform(rotation=(-42.73375,0.00000,-1.11397,1.14105),translation=(1.29261,1.32632,0.39085),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(47.58907,-0.00000,73.66708,1.47472),translation=(0.91692,1.23933,0.91074),
      children=[
      Shape(
        #  Arc 2.86 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.88108,radius=0.02000))]),
    Transform(rotation=(47.58907,-0.00000,73.66708,1.47472),translation=(0.68236,1.26624,1.06226),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(53.91809,-0.00000,74.13807,2.18227),translation=(0.91457,0.87571,0.94238),
      children=[
      Shape(
        #  Arc 2.93 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.11957,radius=0.02000))]),
    Transform(rotation=(53.91809,-0.00000,74.13807,2.18227),translation=(0.64983,0.64620,1.13492),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.76979,0.00000,-44.21929,1.28913),translation=(1.50636,1.27935,0.85164),
      children=[
      Shape(
        #  Arc 2.95 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59209,radius=0.02000))]),
    Transform(rotation=(35.76979,0.00000,-44.21929,1.28913),translation=(1.60796,1.31717,0.93383),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-2.04871,0.00000,-35.95992,0.59946),translation=(1.46506,1.46061,0.66255),
      children=[
      Shape(
        #  Arc 2.96 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63840,radius=0.02000))]),
    Transform(rotation=(-2.04871,0.00000,-35.95992,0.59946),translation=(1.55473,1.59205,0.65744),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.32824,0.00000,-90.34078,0.96227),translation=(1.73696,1.51890,0.57615),
      children=[
      Shape(
        #  Arc 2.100 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.12598,radius=0.02000))]),
    Transform(rotation=(-19.32824,0.00000,-90.34078,0.96227),translation=(2.06029,1.74927,0.50697),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-12.05155,0.00000,-54.60721,0.95856),translation=(1.55830,1.39342,0.61253),
      children=[
      Shape(
        #  Arc 2.101 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68333,radius=0.02000))]),
    Transform(rotation=(-12.05155,0.00000,-54.60721,0.95856),translation=(1.70347,1.49782,0.58049),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-21.11987,0.00000,18.42947,0.76493),translation=(1.19311,1.34308,0.56719),
      children=[
      Shape(
        #  Arc 2.108 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40478,radius=0.02000))]),
    Transform(rotation=(-21.11987,0.00000,18.42947,0.76493),translation=(1.17381,1.37366,0.54507),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-2.70307,0.00000,13.93730,0.33009),translation=(1.21557,1.40425,0.65927),
      children=[
      Shape(
        #  Arc 2.109 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43801,radius=0.02000))]),
    Transform(rotation=(-2.70307,0.00000,13.93730,0.33009),translation=(1.19680,1.46006,0.65563),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(57.58049,-0.00000,68.15616,1.19378),translation=(0.94448,1.37371,0.96069),
      children=[
      Shape(
        #  Arc 2.112 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.95963,radius=0.02000))]),
    Transform(rotation=(57.58049,-0.00000,68.15616,1.19378),translation=(0.71734,1.49145,1.15259),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(4.39881,0.00000,-102.66580,1.08069),translation=(1.79859,1.47119,0.69478),
      children=[
      Shape(
        #  Arc 2.120 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16471,radius=0.02000))]),
    Transform(rotation=(4.39881,0.00000,-102.66580,1.08069),translation=(2.17088,1.67000,0.71074),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.89032,0.00000,-48.65419,2.19005),translation=(1.52853,1.02279,0.64834),
      children=[
      Shape(
        #  Arc 2.130 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60050,radius=0.02000))]),
    Transform(rotation=(-4.89032,0.00000,-48.65419,2.19005),translation=(1.64216,0.94139,0.63692),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-68.44504,0.00000,-32.72901,2.58343),translation=(1.44890,0.58954,0.33056),
      children=[
      Shape(
        #  Arc 2.136 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.43247,radius=0.02000))]),
    Transform(rotation=(-68.44504,0.00000,-32.72901,2.58343),translation=(1.57599,0.11772,0.06479),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(39.09448,-0.00000,118.87490,1.73395),translation=(0.69089,1.09406,0.86826),
      children=[
      Shape(
        #  Arc 2.139 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.26823,radius=0.02000))]),
    Transform(rotation=(39.09448,-0.00000,118.87490,1.73395),translation=(0.24648,1.01705,1.01441),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.12481,0.00000,-100.12081,1.32520),translation=(1.78586,1.33971,0.94341),
      children=[
      Shape(
        #  Arc 2.142 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.17335,radius=0.02000))]),
    Transform(rotation=(54.12481,0.00000,-100.12081,1.32520),translation=(2.14994,1.44345,1.14023),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.85962,0.00000,-42.41972,0.73582),translation=(1.49736,1.43530,0.63349),
      children=[
      Shape(
        #  Arc 2.149 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64276,radius=0.02000))]),
    Transform(rotation=(-7.85962,0.00000,-42.41972,0.73582),translation=(1.60386,1.55492,0.61376),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(39.22838,0.00000,-72.79958,0.82050),translation=(1.64926,1.58249,0.86893),
      children=[
      Shape(
        #  Arc 2.150 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13052,radius=0.02000))]),
    Transform(rotation=(39.22838,0.00000,-72.79958,0.82050),translation=(1.91022,1.85882,1.00955),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-52.85388,0.00000,-3.51842,2.41799),translation=(1.30285,0.89728,0.40852),
      children=[
      Shape(
        #  Arc 2.162 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80006,radius=0.02000))]),
    Transform(rotation=(-52.85388,0.00000,-3.51842,2.41799),translation=(1.31341,0.71739,0.24995),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-9.74344,0.00000,-51.25106,2.23008),translation=(1.54151,0.99492,0.62407),
      children=[
      Shape(
        #  Arc 2.166 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66001,radius=0.02000))]),
    Transform(rotation=(-9.74344,0.00000,-51.25106,2.23008),translation=(1.67353,0.89079,0.59898),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-5.52087,0.00000,-40.50488,0.69144),translation=(1.48778,1.44400,0.64519),
      children=[
      Shape(
        #  Arc 2.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64110,radius=0.02000))]),
    Transform(rotation=(-5.52087,0.00000,-40.50488,0.69144),translation=(1.58922,1.56767,0.63136),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.04325,0.00000,-37.09405,1.64088),translation=(1.47073,1.17406,0.94301),
      children=[
      Shape(
        #  Arc 2.174 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65710,radius=0.02000))]),
    Transform(rotation=(54.04325,0.00000,-37.09405,1.64088),translation=(1.56588,1.16226,1.08163),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.92270,0.00000,-50.98639,1.02160),translation=(1.54019,1.35381,0.64818),
      children=[
      Shape(
        #  Arc 2.177 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60055,radius=0.02000))]),
    Transform(rotation=(-4.92270,0.00000,-50.98639,1.02160),translation=(1.65928,1.42703,0.63668),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.02721,0.00000,-37.02758,1.56560),translation=(1.47040,1.19877,0.94293),
      children=[
      Shape(
        #  Arc 2.178 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65499,radius=0.02000))]),
    Transform(rotation=(54.02721,0.00000,-37.02758,1.56560),translation=(1.56508,1.19964,1.08108),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-22.24485,0.00000,115.27706,1.30705),translation=(0.70887,1.35558,0.56157),
      children=[
      Shape(
        #  Arc 2.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.21609,radius=0.02000))]),
    Transform(rotation=(-22.24485,0.00000,115.27706,1.30705),translation=(0.28416,1.47239,0.47961),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.18582,0.00000,-24.11888,0.40071),translation=(1.40585,1.48175,0.67186),
      children=[
      Shape(
        #  Arc 2.183 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61834,radius=0.02000))]),
    Transform(rotation=(-0.18582,0.00000,-24.11888,0.40071),translation=(1.46404,1.61910,0.67141),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(18.87163,0.00000,-106.68303,1.75662),translation=(1.81867,1.09523,0.76715),
      children=[
      Shape(
        #  Arc 2.185 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.10237,radius=0.02000))]),
    Transform(rotation=(18.87163,0.00000,-106.68303,1.75662),translation=(2.19725,1.02296,0.83412),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-49.35679,0.00000,-37.83979,2.56343),translation=(1.47446,0.72052,0.42601),
      children=[
      Shape(
        #  Arc 2.189 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13805,radius=0.02000))]),
    Transform(rotation=(-49.35679,0.00000,-37.83979,2.56343),translation=(1.61046,0.37798,0.24861),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(58.78937,0.00000,-38.32173,1.55420),translation=(1.47687,1.20289,0.96674),
      children=[
      Shape(
        #  Arc 2.197 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.70186,radius=0.02000))]),
    Transform(rotation=(58.78937,0.00000,-38.32173,1.55420),translation=(1.58112,1.20606,1.12666),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(94.17435,0.00000,-73.59026,1.49234),translation=(1.65321,1.24405,1.14366),
      children=[
      Shape(
        #  Arc 2.201 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.19886,radius=0.02000))]),
    Transform(rotation=(94.17435,0.00000,-73.59026,1.49234),translation=(1.92295,1.27849,1.48885),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(48.36781,-0.00000,49.59586,1.17305),translation=(1.03728,1.34259,0.91463),
      children=[
      Shape(
        #  Arc 2.208 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.75142,radius=0.02000))]),
    Transform(rotation=(48.36781,-0.00000,49.59586,1.17305),translation=(0.89491,1.42615,1.05348),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.54615,0.00000,-91.81236,2.10223),translation=(1.74432,0.92630,0.63506),
      children=[
      Shape(
        #  Arc 2.213 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.06860,radius=0.02000))]),
    Transform(rotation=(-7.54615,0.00000,-91.81236,2.10223),translation=(2.06591,0.73661,0.60863),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(71.64423,0.00000,-5.86594,0.74977),translation=(1.31459,1.58306,1.03101),
      children=[
      Shape(
        #  Arc 2.216 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.05484,radius=0.02000))]),
    Transform(rotation=(71.64423,0.00000,-5.86594,0.74977),translation=(1.33502,1.85195,1.28056),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-51.32564,0.00000,103.99643,1.43953),translation=(0.76528,1.27362,0.41616),
      children=[
      Shape(
        #  Arc 2.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16979,radius=0.02000))]),
    Transform(rotation=(-51.32564,0.00000,103.99643,1.43953),translation=(0.38754,1.32924,0.22974),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-26.27301,0.00000,-31.42144,2.22023),translation=(1.44237,1.04156,0.54143),
      children=[
      Shape(
        #  Arc 2.221 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51428,radius=0.02000))]),
    Transform(rotation=(-26.27301,0.00000,-31.42144,2.22023),translation=(1.50172,0.98282,0.49180),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(4.39881,0.00000,-102.66580,1.08069),translation=(1.79859,1.47119,0.69478),
      children=[
      Shape(
        #  Arc 2.222 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16471,radius=0.02000))]),
    Transform(rotation=(4.39881,0.00000,-102.66580,1.08069),translation=(2.17088,1.67000,0.71074),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.15813,0.00000,-54.29821,1.22004),translation=(1.55675,1.29848,0.72858),
      children=[
      Shape(
        #  Arc 2.228 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59027,radius=0.02000))]),
    Transform(rotation=(11.15813,0.00000,-54.29821,1.22004),translation=(1.68106,1.34491,0.75413),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.41372,-0.00000,49.83963,0.96035),translation=(1.03606,1.42827,0.88986),
      children=[
      Shape(
        #  Arc 2.231 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80665,radius=0.02000))]),
    Transform(rotation=(43.41372,-0.00000,49.83963,0.96035),translation=(0.88572,1.56775,1.02082),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-68.27268,0.00000,67.76858,2.19645),translation=(0.94642,0.84957,0.33143),
      children=[
      Shape(
        #  Arc 2.232 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.18676,radius=0.02000))]),
    Transform(rotation=(-68.27268,0.00000,67.76858,2.19645),translation=(0.69894,0.59577,0.08211),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(54.12481,0.00000,-100.12081,1.32520),translation=(1.78586,1.33971,0.94341),
      children=[
      Shape(
        #  Arc 2.237 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.17335,radius=0.02000))]),
    Transform(rotation=(54.12481,0.00000,-100.12081,1.32520),translation=(2.14994,1.44345,1.14023),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(91.44907,0.00000,-70.16629,1.34144),translation=(1.63609,1.33162,1.13004),
      children=[
      Shape(
        #  Arc 2.238 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.18366,radius=0.02000))]),
    Transform(rotation=(91.44907,0.00000,-70.16629,1.34144),translation=(1.89208,1.42980,1.46367),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(76.29040,0.00000,-69.91923,1.10894),translation=(1.63486,1.45462,1.05424),
      children=[
      Shape(
        #  Arc 2.239 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.15595,radius=0.02000))]),
    Transform(rotation=(76.29040,0.00000,-69.91923,1.10894),translation=(1.88767,1.64087,1.33010),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(52.81147,-0.00000,26.74114,1.04796),translation=(1.15155,1.36765,0.93685),
      children=[
      Shape(
        #  Arc 2.242 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68323,radius=0.02000))]),
    Transform(rotation=(52.81147,-0.00000,26.74114,1.04796),translation=(1.08047,1.45834,1.07723),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-15.74023,0.00000,-34.49310,0.80226),translation=(1.45773,1.38035,0.59409),
      children=[
      Shape(
        #  Arc 2.243 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52738,radius=0.02000))]),
    Transform(rotation=(-15.74023,0.00000,-34.49310,0.80226),translation=(1.52554,1.45242,0.56314),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.62361,0.00000,157.35709,2.01035),translation=(0.49847,0.82709,0.66967),
      children=[
      Shape(
        #  Arc 2.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.73888,radius=0.02000))]),
    Transform(rotation=(-0.62361,0.00000,157.35709,2.01035),translation=(-0.14352,0.52519,0.66713),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(0.66724,0.00000,-28.01831,0.28067),translation=(1.42535,1.68317,0.67613),
      children=[
      Shape(
        #  Arc 2.247 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.01180,radius=0.02000))]),
    Transform(rotation=(0.66724,0.00000,-28.01831,0.28067),translation=(1.52114,2.01553,0.67841),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(53.29854,0.00000,-37.66036,1.53459),translation=(1.47356,1.20888,0.93928),
      children=[
      Shape(
        #  Arc 2.248 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65304,radius=0.02000))]),
    Transform(rotation=(53.29854,0.00000,-37.66036,1.53459),translation=(1.56959,1.21491,1.07519),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.38176,0.00000,-47.78299,0.80433),translation=(1.52417,1.43595,0.60588),
      children=[
      Shape(
        #  Arc 2.250 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68884,radius=0.02000))]),
    Transform(rotation=(-13.38176,0.00000,-47.78299,0.80433),translation=(1.65210,1.56387,0.57006),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-78.88604,0.00000,85.54557,2.23468),translation=(0.85753,0.74188,0.27836),
      children=[
      Shape(
        #  Arc 2.255 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.47746,radius=0.02000))]),
    Transform(rotation=(-78.88604,0.00000,85.54557,2.23468),translation=(0.52244,0.38527,-0.03064),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.18573,0.00000,-54.29694,1.22027),translation=(1.55674,1.29841,0.72872),
      children=[
      Shape(
        #  Arc 2.268 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59026,radius=0.02000))]),
    Transform(rotation=(11.18573,0.00000,-54.29694,1.22027),translation=(1.68105,1.34481,0.75433),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-77.07768,0.00000,116.73040,1.28377),translation=(0.70161,1.40352,0.28740),
      children=[
      Shape(
        #  Arc 2.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.45849,radius=0.02000))]),
    Transform(rotation=(-77.07768,0.00000,116.73040,1.28377),translation=(0.24601,1.56468,-0.01343),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(15.19767,0.00000,-3.40916,0.58208),translation=(-0.04918,2.10375,-1.12251),
      children=[
      Shape(
        #  Arc 3.17 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.28331,radius=0.02000))]),
    Transform(rotation=(15.19767,0.00000,-3.40916,0.58208),translation=(-0.05139,2.08843,-1.13235),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-96.23992,0.00000,21.32385,1.21812),translation=(-0.17285,2.16683,-1.67969),
      children=[
      Shape(
        #  Arc 3.18 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.05039,radius=0.02000))]),
    Transform(rotation=(-96.23992,0.00000,21.32385,1.21812),translation=(-0.24698,2.29297,-2.01430),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-67.03518,0.00000,54.20032,1.00293),translation=(-0.33723,2.26040,-1.53367),
      children=[
      Shape(
        #  Arc 3.19 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02254,radius=0.02000))]),
    Transform(rotation=(-67.03518,0.00000,54.20032,1.00293),translation=(-0.52342,2.44932,-1.76395),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-79.51418,0.00000,51.52237,1.14414),translation=(-0.32384,2.20077,-1.59606),
      children=[
      Shape(
        #  Arc 3.20 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04077,radius=0.02000))]),
    Transform(rotation=(-79.51418,0.00000,51.52237,1.14414),translation=(-0.50224,2.34991,-1.87140),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-96.23992,0.00000,21.32385,1.21812),translation=(-0.17285,2.16683,-1.67969),
      children=[
      Shape(
        #  Arc 3.25 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.05039,radius=0.02000))]),
    Transform(rotation=(-96.23992,0.00000,21.32385,1.21812),translation=(-0.24698,2.29297,-2.01430),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.51379,-0.00000,10.54445,2.99833),translation=(-0.11895,1.44428,-1.14092),
      children=[
      Shape(
        #  Arc 3.26 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.09349,radius=0.02000))]),
    Transform(rotation=(11.51379,-0.00000,10.54445,2.99833),translation=(-0.15624,1.06149,-1.10020),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-67.14422,0.00000,35.09463,0.90370),translation=(-0.24170,2.28375,-1.53421),
      children=[
      Shape(
        #  Arc 3.42 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96436,radius=0.02000))]),
    Transform(rotation=(-67.14422,0.00000,35.09463,0.90370),translation=(-0.35895,2.48308,-1.75854),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-33.60072,0.00000,6.59098,0.66704),translation=(-0.09918,2.20284,-1.36650),
      children=[
      Shape(
        #  Arc 3.53 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55347,radius=0.02000))]),
    Transform(rotation=(-33.60072,0.00000,6.59098,0.66704),translation=(-0.11308,2.29456,-1.43737),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-40.42120,0.00000,17.74465,2.13488),translation=(-0.15495,1.84578,-1.40060),
      children=[
      Shape(
        #  Arc 3.54 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52237,radius=0.02000))]),
    Transform(rotation=(-40.42120,0.00000,17.74465,2.13488),translation=(-0.18932,1.79168,-1.47890),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-89.56123,0.00000,-7.60692,1.05786),translation=(-0.02819,2.23854,-1.64630),
      children=[
      Shape(
        #  Arc 3.64 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.03160,radius=0.02000))]),
    Transform(rotation=(-89.56123,0.00000,-7.60692,1.05786),translation=(-0.00196,2.41315,-1.95520),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-84.83101,0.00000,-10.58657,0.98911),translation=(-0.01329,2.26650,-1.62265),
      children=[
      Shape(
        #  Arc 3.65 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02316,radius=0.02000))]),
    Transform(rotation=(-84.83101,0.00000,-10.58657,0.98911),translation=(0.02308,2.45967,-1.91415),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-84.83101,0.00000,-10.58657,0.98911),translation=(-0.01329,2.26650,-1.62265),
      children=[
      Shape(
        #  Arc 3.76 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02316,radius=0.02000))]),
    Transform(rotation=(-84.83101,0.00000,-10.58657,0.98911),translation=(0.02308,2.45967,-1.91415),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(153.48582,0.00000,-61.12069,1.73015),translation=(0.23938,1.85266,-0.43106),
      children=[
      Shape(
        #  Arc 3.79 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.67328,radius=0.02000))]),
    Transform(rotation=(153.48582,0.00000,-61.12069,1.73015),translation=(0.48654,1.74529,0.18960),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-49.54296,0.00000,7.92412,0.94943),translation=(-0.10585,2.16503,-1.44621),
      children=[
      Shape(
        #  Arc 3.123 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61707,radius=0.02000))]),
    Transform(rotation=(-49.54296,0.00000,7.92412,0.94943),translation=(-0.12492,2.25150,-1.56546),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(16.92255,0.00000,-3.86192,0.51261),translation=(-0.04692,2.13963,-1.11388),
      children=[
      Shape(
        #  Arc 3.132 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.35391,radius=0.02000))]),
    Transform(rotation=(16.92255,0.00000,-3.86192,0.51261),translation=(-0.04507,2.15441,-1.10577),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-60.46858,0.00000,30.97389,2.20178),translation=(-0.22110,1.73723,-1.50084),
      children=[
      Shape(
        #  Arc 3.137 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.84142,radius=0.02000))]),
    Transform(rotation=(-60.46858,0.00000,30.97389,2.20178),translation=(-0.31707,1.58342,-1.68820),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-67.14441,0.00000,35.09471,0.90371),translation=(-0.24170,2.28375,-1.53422),
      children=[
      Shape(
        #  Arc 3.170 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96436,radius=0.02000))]),
    Transform(rotation=(-67.14441,0.00000,35.09471,0.90371),translation=(-0.35895,2.48308,-1.75854),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-25.57098,0.00000,3.32464,0.32507),translation=(-0.08285,2.36798,-1.32635),
      children=[
      Shape(
        #  Arc 3.176 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80740,radius=0.02000))]),
    Transform(rotation=(-25.57098,0.00000,3.32464,0.32507),translation=(-0.09288,2.59891,-1.40353),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-79.51418,0.00000,51.52237,1.14414),translation=(-0.32384,2.20077,-1.59606),
      children=[
      Shape(
        #  Arc 3.194 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04077,radius=0.02000))]),
    Transform(rotation=(-79.51418,0.00000,51.52237,1.14414),translation=(-0.50224,2.34991,-1.87140),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-46.94752,0.00000,20.74368,0.93350),translation=(-0.16994,2.17542,-1.43323),
      children=[
      Shape(
        #  Arc 3.199 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63862,radius=0.02000))]),
    Transform(rotation=(-46.94752,0.00000,20.74368,0.93350),translation=(-0.22169,2.27021,-1.55035),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(61.71396,0.00000,-45.56792,1.10067),translation=(0.16161,2.18032,-0.88992),
      children=[
      Shape(
        #  Arc 3.220 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.86049,radius=0.02000))]),
    Transform(rotation=(61.71396,0.00000,-45.56792,1.10067),translation=(0.30472,2.30274,-0.69610),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-75.98101,0.00000,7.26001,0.91643),translation=(-0.10253,2.27818,-1.57840),
      children=[
      Shape(
        #  Arc 3.254 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96198,radius=0.02000))]),
    Transform(rotation=(-75.98101,0.00000,7.26001,0.91643),translation=(-0.12675,2.47355,-1.83193),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-57.79978,0.00000,9.68324,0.68122),translation=(-0.11464,2.34688,-1.48749),
      children=[
      Shape(
        #  Arc 3.267 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.93062,radius=0.02000))]),
    Transform(rotation=(-57.79978,0.00000,9.68324,0.68122),translation=(-0.14641,2.58404,-1.67712),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(110.05069,0.00000,-18.41820,1.89538),translation=(0.02586,1.79770,-0.64824),
      children=[
      Shape(
        #  Arc 3.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.17729,radius=0.02000))]),
    Transform(rotation=(110.05069,0.00000,-18.41820,1.89538),translation=(0.09292,1.66100,-0.24755),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(66.91133,0.00000,-26.73889,2.02417),translation=(1.97547,-2.36693,1.21817),
      children=[
      Shape(
        #  Arc 4.30 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80154,radius=0.02000))]),
    Transform(rotation=(66.91133,0.00000,-26.73889,2.02417),translation=(2.05579,-2.47239,1.41917),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(23.89356,0.00000,-12.57809,2.44581),translation=(1.90466,-2.35306,1.00309),
      children=[
      Shape(
        #  Arc 4.41 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.42126,radius=0.02000))]),
    Transform(rotation=(23.89356,0.00000,-12.57809,2.44581),translation=(1.91978,-2.39192,1.03180),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-52.92869,0.00000,39.70544,0.86355),translation=(1.64325,-1.90861,0.61897),
      children=[
      Shape(
        #  Arc 4.59 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.87043,radius=0.02000))]),
    Transform(rotation=(-52.92869,0.00000,39.70544,0.86355),translation=(1.51770,-1.72980,0.45162),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.05918,0.00000,18.58910,2.15211),translation=(1.74883,-2.25256,0.87832),
      children=[
      Shape(
        #  Arc 4.81 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.22279,radius=0.02000))]),
    Transform(rotation=(-1.05918,0.00000,18.58910,2.15211),translation=(1.78938,-2.22587,0.88063),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(66.91133,0.00000,-26.73889,2.02417),translation=(1.97547,-2.36693,1.21817),
      children=[
      Shape(
        #  Arc 4.91 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80154,radius=0.02000))]),
    Transform(rotation=(66.91133,0.00000,-26.73889,2.02417),translation=(2.05579,-2.47239,1.41917),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(58.98886,0.00000,-40.40635,2.02025),translation=(2.04380,-2.36384,1.17856),
      children=[
      Shape(
        #  Arc 4.118 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.79385,radius=0.02000))]),
    Transform(rotation=(58.98886,0.00000,-40.40635,2.02025),translation=(2.16440,-2.46678,1.35461),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(24.72764,-0.00000,14.90550,2.66493),translation=(1.76724,-2.47096,1.00726),
      children=[
      Shape(
        #  Arc 4.144 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.62929,radius=0.02000))]),
    Transform(rotation=(24.72764,-0.00000,14.90550,2.66493),translation=(1.73062,-2.60837,1.06802),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(63.62313,-0.00000,5.33130,2.20272),translation=(1.81512,-2.42509,1.20173),
      children=[
      Shape(
        #  Arc 4.148 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.79126,radius=0.02000))]),
    Transform(rotation=(63.62313,-0.00000,5.33130,2.20272),translation=(1.79924,-2.56428,1.39120),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.06347,0.00000,-21.46030,2.39581),translation=(1.94907,-2.44699,1.09393),
      children=[
      Shape(
        #  Arc 4.172 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.69593,radius=0.02000))]),
    Transform(rotation=(42.06347,0.00000,-21.46030,2.39581),translation=(2.00704,-2.58506,1.20754),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(23.89004,0.00000,-12.74018,2.44370),translation=(1.90547,-2.35280,1.00307),
      children=[
      Shape(
        #  Arc 4.186 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.42133,radius=0.02000))]),
    Transform(rotation=(23.89004,0.00000,-12.74018,2.44370),translation=(1.92079,-2.39162,1.03180),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-64.49416,0.00000,-0.66513,0.79303),translation=(1.84510,-1.87379,0.56115),
      children=[
      Shape(
        #  Arc 4.207 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.90525,radius=0.02000))]),
    Transform(rotation=(-64.49416,0.00000,-0.66513,0.79303),translation=(1.84725,-1.66846,0.35267),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(63.62313,-0.00000,5.33130,2.20272),translation=(1.81512,-2.42509,1.20173),
      children=[
      Shape(
        #  Arc 4.224 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.79126,radius=0.02000))]),
    Transform(rotation=(63.62313,-0.00000,5.33130,2.20272),translation=(1.79924,-2.56428,1.39120),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-22.22437,0.00000,-33.35614,1.57336),translation=(2.00855,-2.19190,0.77250),
      children=[
      Shape(
        #  Arc 4.257 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40082,radius=0.02000))]),
    Transform(rotation=(-22.22437,0.00000,-33.35614,1.57336),translation=(2.04218,-2.19201,0.75009),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.08815,0.00000,-20.91804,2.39986),translation=(1.94636,-2.44787,1.09406),
      children=[
      Shape(
        #  Arc 4.264 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.69571,radius=0.02000))]),
    Transform(rotation=(42.08815,0.00000,-20.91804,2.39986),translation=(2.00285,-2.58637,1.20770),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.28472,0.00000,3.79002,2.06420),translation=(-0.46897,1.57433,0.09014),
      children=[
      Shape(
        #  Arc 5.15 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04544,radius=0.02000))]),
    Transform(rotation=(-1.28472,0.00000,3.79002,2.06420),translation=(-0.35446,1.63935,0.12896),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.50632,0.00000,22.64699,0.97572),translation=(-0.56325,1.66325,0.07404),
      children=[
      Shape(
        #  Arc 5.38 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27884,radius=0.02000))]),
    Transform(rotation=(-4.50632,0.00000,22.64699,0.97572),translation=(-0.54654,1.65171,0.07736),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.68112,1.75141,0.05892),
      children=[
      Shape(
        #  Arc 5.46 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57440,radius=0.02000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.78347,1.82507,0.04225),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.48062,-0.00000,7.19355,2.23067),translation=(-0.48598,1.45603,0.25897),
      children=[
      Shape(
        #  Arc 5.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.42107,radius=0.02000))]),
    Transform(rotation=(32.48062,-0.00000,7.19355,2.23067),translation=(-0.49462,1.42505,0.29795),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.35327,0.00000,2.74300,2.39062),translation=(-0.46373,1.56871,0.08980),
      children=[
      Shape(
        #  Arc 5.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04483,radius=0.02000))]),
    Transform(rotation=(-1.35327,0.00000,2.74300,2.39062),translation=(-0.37954,1.66929,0.13134),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.44464,0.00000,50.48497,0.95816),translation=(-0.70244,1.76443,0.05934),
      children=[
      Shape(
        #  Arc 5.63 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.62375,radius=0.02000))]),
    Transform(rotation=(-7.44464,0.00000,50.48497,0.95816),translation=(-0.82537,1.85176,0.04122),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.80893,0.00000,48.83572,0.95411),translation=(-0.69420,1.76039,0.05752),
      children=[
      Shape(
        #  Arc 5.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60623,radius=0.02000))]),
    Transform(rotation=(-7.80893,0.00000,48.83572,0.95411),translation=(-0.80948,1.84316,0.03909),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.08431,0.00000,0.94270,0.09695),translation=(-0.45473,1.65896,0.09115),
      children=[
      Shape(
        #  Arc 5.126 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.14844,radius=0.02000))]),
    Transform(rotation=(-1.08431,0.00000,0.94270,0.09695),translation=(-0.44928,1.57358,0.09741),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.38197,0.00000,20.55798,0.97626),translation=(-0.55281,1.65615,0.07466),
      children=[
      Shape(
        #  Arc 5.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25374,radius=0.02000))]),
    Transform(rotation=(-4.38197,0.00000,20.55798,0.97626),translation=(-0.52596,1.63760,0.08038),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.26089,0.00000,21.50432,0.98054),translation=(-0.55754,1.65852,0.07526),
      children=[
      Shape(
        #  Arc 5.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26387,radius=0.02000))]),
    Transform(rotation=(-4.26089,0.00000,21.50432,0.98054),translation=(-0.53467,1.64290,0.07979),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.68188,1.75233,0.05959),
      children=[
      Shape(
        #  Arc 5.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57653,radius=0.02000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.78505,1.82674,0.04313),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.51306,0.00000,21.37465,0.97401),translation=(-0.55689,1.65930,0.07400),
      children=[
      Shape(
        #  Arc 5.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26411,radius=0.02000))]),
    Transform(rotation=(-4.51306,0.00000,21.37465,0.97401),translation=(-0.53427,1.64360,0.07878),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.68112,1.75141,0.05892),
      children=[
      Shape(
        #  Arc 5.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57440,radius=0.02000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.78347,1.82507,0.04225),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.37748,0.00000,-58.25059,1.67458),translation=(-0.15876,1.54960,0.27345),
      children=[
      Shape(
        #  Arc 5.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68521,radius=0.02000))]),
    Transform(rotation=(35.37748,0.00000,-58.25059,1.67458),translation=(-0.00353,1.53068,0.36773),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.59766,0.00000,-5.76286,2.75903),translation=(-0.42120,1.23477,-0.04142),
      children=[
      Shape(
        #  Arc 5.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.75524,radius=0.02000))]),
    Transform(rotation=(-27.59766,0.00000,-5.76286,2.75903),translation=(-0.40460,1.03288,-0.12094),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.04741,0.00000,73.17034,0.97578),translation=(-0.81587,1.83386,0.06133),
      children=[
      Shape(
        #  Arc 5.192 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.88764,radius=0.02000))]),
    Transform(rotation=(-7.04741,0.00000,73.17034,0.97578),translation=(-1.04983,1.99295,0.03880),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.68515,0.00000,21.53838,1.07535),translation=(-0.55771,1.64332,0.09314),
      children=[
      Shape(
        #  Arc 5.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.24495,radius=0.02000))]),
    Transform(rotation=(-0.68515,0.00000,21.53838,1.07535),translation=(-0.52471,1.62548,0.09419),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.04436,0.00000,20.28411,1.51531),translation=(-0.55144,1.59138,0.04635),
      children=[
      Shape(
        #  Arc 5.203 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.22670,radius=0.02000))]),
    Transform(rotation=(-10.04436,0.00000,20.28411,1.51531),translation=(-0.50970,1.58879,0.06702),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.68188,1.75233,0.05959),
      children=[
      Shape(
        #  Arc 5.212 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57653,radius=0.02000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.78505,1.82674,0.04313),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.29669,0.00000,-69.53122,1.89537),translation=(-0.10236,1.46764,0.12805),
      children=[
      Shape(
        #  Arc 5.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.73662,radius=0.02000))]),
    Transform(rotation=(6.29669,0.00000,-69.53122,1.89537),translation=(0.09427,1.40120,0.14586),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.68188,1.75233,0.05959),
      children=[
      Shape(
        #  Arc 5.251 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57653,radius=0.02000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.78505,1.82674,0.04313),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.45536,0.00000,-56.79725,1.52938),translation=(-0.16603,1.59753,-0.00071),
      children=[
      Shape(
        #  Arc 5.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60089,radius=0.02000))]),
    Transform(rotation=(-19.45536,0.00000,-56.79725,1.52938),translation=(-0.03328,1.60335,-0.04618),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.28472,0.00000,3.79002,2.06420),translation=(-0.46897,1.57433,0.09014),
      children=[
      Shape(
        #  Arc 6.15 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04544,radius=0.02000))]),
    Transform(rotation=(-1.28472,0.00000,3.79002,2.06420),translation=(-0.35446,1.63935,0.12896),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.50632,0.00000,22.64699,0.97572),translation=(-0.56325,1.66325,0.07404),
      children=[
      Shape(
        #  Arc 6.38 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27884,radius=0.02000))]),
    Transform(rotation=(-4.50632,0.00000,22.64699,0.97572),translation=(-0.54654,1.65171,0.07736),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.68112,1.75141,0.05892),
      children=[
      Shape(
        #  Arc 6.46 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57440,radius=0.02000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.78347,1.82507,0.04225),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.48062,-0.00000,7.19355,2.23067),translation=(-0.48598,1.45603,0.25897),
      children=[
      Shape(
        #  Arc 6.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.42107,radius=0.02000))]),
    Transform(rotation=(32.48062,-0.00000,7.19355,2.23067),translation=(-0.49462,1.42505,0.29795),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.35327,0.00000,2.74300,2.39062),translation=(-0.46373,1.56871,0.08980),
      children=[
      Shape(
        #  Arc 6.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04483,radius=0.02000))]),
    Transform(rotation=(-1.35327,0.00000,2.74300,2.39062),translation=(-0.37954,1.66929,0.13134),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.44464,0.00000,50.48497,0.95816),translation=(-0.70244,1.76443,0.05934),
      children=[
      Shape(
        #  Arc 6.63 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.62375,radius=0.02000))]),
    Transform(rotation=(-7.44464,0.00000,50.48497,0.95816),translation=(-0.82537,1.85176,0.04122),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.80893,0.00000,48.83572,0.95411),translation=(-0.69420,1.76039,0.05752),
      children=[
      Shape(
        #  Arc 6.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60623,radius=0.02000))]),
    Transform(rotation=(-7.80893,0.00000,48.83572,0.95411),translation=(-0.80948,1.84316,0.03909),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.08431,0.00000,0.94270,0.09695),translation=(-0.45473,1.65896,0.09115),
      children=[
      Shape(
        #  Arc 6.126 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.14844,radius=0.02000))]),
    Transform(rotation=(-1.08431,0.00000,0.94270,0.09695),translation=(-0.44928,1.57358,0.09741),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.38197,0.00000,20.55798,0.97626),translation=(-0.55281,1.65615,0.07466),
      children=[
      Shape(
        #  Arc 6.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25374,radius=0.02000))]),
    Transform(rotation=(-4.38197,0.00000,20.55798,0.97626),translation=(-0.52596,1.63760,0.08038),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.26089,0.00000,21.50432,0.98054),translation=(-0.55754,1.65852,0.07526),
      children=[
      Shape(
        #  Arc 6.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26387,radius=0.02000))]),
    Transform(rotation=(-4.26089,0.00000,21.50432,0.98054),translation=(-0.53467,1.64290,0.07979),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.68188,1.75233,0.05959),
      children=[
      Shape(
        #  Arc 6.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57653,radius=0.02000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.78505,1.82674,0.04313),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.51306,0.00000,21.37465,0.97401),translation=(-0.55689,1.65930,0.07400),
      children=[
      Shape(
        #  Arc 6.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26411,radius=0.02000))]),
    Transform(rotation=(-4.51306,0.00000,21.37465,0.97401),translation=(-0.53427,1.64360,0.07878),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.68112,1.75141,0.05892),
      children=[
      Shape(
        #  Arc 6.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57440,radius=0.02000))]),
    Transform(rotation=(-7.52926,0.00000,46.22008,0.95319),translation=(-0.78347,1.82507,0.04225),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.37748,0.00000,-58.25059,1.67458),translation=(-0.15876,1.54960,0.27345),
      children=[
      Shape(
        #  Arc 6.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68521,radius=0.02000))]),
    Transform(rotation=(35.37748,0.00000,-58.25059,1.67458),translation=(-0.00353,1.53068,0.36773),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.59766,0.00000,-5.76286,2.75903),translation=(-0.42120,1.23477,-0.04142),
      children=[
      Shape(
        #  Arc 6.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.75524,radius=0.02000))]),
    Transform(rotation=(-27.59766,0.00000,-5.76286,2.75903),translation=(-0.40460,1.03288,-0.12094),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.04741,0.00000,73.17034,0.97578),translation=(-0.81587,1.83386,0.06133),
      children=[
      Shape(
        #  Arc 6.192 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.88764,radius=0.02000))]),
    Transform(rotation=(-7.04741,0.00000,73.17034,0.97578),translation=(-1.04983,1.99295,0.03880),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.68515,0.00000,21.53838,1.07535),translation=(-0.55771,1.64332,0.09314),
      children=[
      Shape(
        #  Arc 6.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.24495,radius=0.02000))]),
    Transform(rotation=(-0.68515,0.00000,21.53838,1.07535),translation=(-0.52471,1.62548,0.09419),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.04436,0.00000,20.28411,1.51531),translation=(-0.55144,1.59138,0.04635),
      children=[
      Shape(
        #  Arc 6.203 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.22670,radius=0.02000))]),
    Transform(rotation=(-10.04436,0.00000,20.28411,1.51531),translation=(-0.50970,1.58879,0.06702),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.68188,1.75233,0.05959),
      children=[
      Shape(
        #  Arc 6.212 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57653,radius=0.02000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.78505,1.82674,0.04313),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.29669,0.00000,-69.53122,1.89537),translation=(-0.10236,1.46764,0.12805),
      children=[
      Shape(
        #  Arc 6.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.73662,radius=0.02000))]),
    Transform(rotation=(6.29669,0.00000,-69.53122,1.89537),translation=(0.09427,1.40120,0.14586),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.68188,1.75233,0.05959),
      children=[
      Shape(
        #  Arc 6.251 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57653,radius=0.02000))]),
    Transform(rotation=(-7.39610,0.00000,46.37258,0.95188),translation=(-0.78505,1.82674,0.04313),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.45536,0.00000,-56.79725,1.52938),translation=(-0.16603,1.59753,-0.00071),
      children=[
      Shape(
        #  Arc 6.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60089,radius=0.02000))]),
    Transform(rotation=(-19.45536,0.00000,-56.79725,1.52938),translation=(-0.03328,1.60335,-0.04618),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.35899,0.00000,4.85251,1.83543),translation=(-0.46365,1.57040,0.09051),
      children=[
      Shape(
        #  Arc 7.15 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.05221,radius=0.02000))]),
    Transform(rotation=(-1.35899,0.00000,4.85251,1.83543),translation=(-0.33921,1.60542,0.12537),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58059,0.00000,23.70949,0.97371),translation=(-0.55794,1.65931,0.07441),
      children=[
      Shape(
        #  Arc 7.38 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29200,radius=0.02000))]),
    Transform(rotation=(-4.58059,0.00000,23.70949,0.97371),translation=(-0.54657,1.65144,0.07660),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.67580,1.74747,0.05929),
      children=[
      Shape(
        #  Arc 7.46 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58761,radius=0.02000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.78347,1.82501,0.04198),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.40635,-0.00000,8.25605,2.21324),translation=(-0.48067,1.45210,0.25934),
      children=[
      Shape(
        #  Arc 7.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41769,radius=0.02000))]),
    Transform(rotation=(32.40635,-0.00000,8.25605,2.21324),translation=(-0.49033,1.42283,0.29724),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.42753,0.00000,3.80550,2.12052),translation=(-0.45842,1.56477,0.09017),
      children=[
      Shape(
        #  Arc 7.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04767,radius=0.02000))]),
    Transform(rotation=(-1.42753,0.00000,3.80550,2.12052),translation=(-0.34971,1.63592,0.13095),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.51891,0.00000,51.54746,0.95765),translation=(-0.69713,1.76049,0.05971),
      children=[
      Shape(
        #  Arc 7.63 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63696,radius=0.02000))]),
    Transform(rotation=(-7.51891,0.00000,51.54746,0.95765),translation=(-0.82538,1.85169,0.04101),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.88319,0.00000,49.89821,0.95366),translation=(-0.68888,1.75646,0.05789),
      children=[
      Shape(
        #  Arc 7.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61943,radius=0.02000))]),
    Transform(rotation=(-7.88319,0.00000,49.89821,0.95366),translation=(-0.80949,1.84310,0.03884),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.15857,0.00000,2.00519,0.14775),translation=(-0.44942,1.65503,0.09152),
      children=[
      Shape(
        #  Arc 7.126 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.15732,radius=0.02000))]),
    Transform(rotation=(-1.15857,0.00000,2.00519,0.14775),translation=(-0.43905,1.57457,0.09751),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.45623,0.00000,21.62048,0.97399),translation=(-0.54749,1.65222,0.07503),
      children=[
      Shape(
        #  Arc 7.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26688,radius=0.02000))]),
    Transform(rotation=(-4.45623,0.00000,21.62048,0.97399),translation=(-0.52598,1.63730,0.07946),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.33515,0.00000,22.56681,0.97819),translation=(-0.55223,1.65459,0.07563),
      children=[
      Shape(
        #  Arc 7.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27703,radius=0.02000))]),
    Transform(rotation=(-4.33515,0.00000,22.56681,0.97819),translation=(-0.53473,1.64259,0.07900),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 7.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58732,0.00000,22.43715,0.97194),translation=(-0.55158,1.65537,0.07437),
      children=[
      Shape(
        #  Arc 7.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27726,radius=0.02000))]),
    Transform(rotation=(-4.58732,0.00000,22.43715,0.97194),translation=(-0.53428,1.64333,0.07791),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.67580,1.74747,0.05929),
      children=[
      Shape(
        #  Arc 7.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58761,radius=0.02000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.78347,1.82501,0.04198),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.30321,0.00000,-57.18810,1.66445),translation=(-0.15345,1.54567,0.27383),
      children=[
      Shape(
        #  Arc 7.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.67503,radius=0.02000))]),
    Transform(rotation=(35.30321,0.00000,-57.18810,1.66445),translation=(-0.00306,1.52907,0.36666),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.67192,0.00000,-4.70036,2.75665),translation=(-0.41589,1.23084,-0.04105),
      children=[
      Shape(
        #  Arc 7.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.74748,radius=0.02000))]),
    Transform(rotation=(-27.67192,0.00000,-4.70036,2.75665),translation=(-0.40245,1.03274,-0.12018),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.75941,0.00000,22.60087,1.06815),translation=(-0.55240,1.63939,0.09351),
      children=[
      Shape(
        #  Arc 7.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25805,radius=0.02000))]),
    Transform(rotation=(-0.75941,0.00000,22.60087,1.06815),translation=(-0.52527,1.62446,0.09442),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.11862,0.00000,21.34660,1.48450),translation=(-0.54612,1.58744,0.04672),
      children=[
      Shape(
        #  Arc 7.203 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.23712,radius=0.02000))]),
    Transform(rotation=(-10.11862,0.00000,21.34660,1.48450),translation=(-0.50882,1.58387,0.06440),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 7.212 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.22242,0.00000,-68.46873,1.88977),translation=(-0.09705,1.46370,0.12842),
      children=[
      Shape(
        #  Arc 7.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72403,radius=0.02000))]),
    Transform(rotation=(6.22242,0.00000,-68.46873,1.88977),translation=(0.09399,1.40035,0.14578),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 7.251 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.52962,0.00000,-55.73475,1.51541),translation=(-0.16072,1.59360,-0.00034),
      children=[
      Shape(
        #  Arc 7.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59148,radius=0.02000))]),
    Transform(rotation=(-19.52962,0.00000,-55.73475,1.51541),translation=(-0.03281,1.60111,-0.04516),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.35899,0.00000,4.85251,1.83543),translation=(-0.46365,1.57040,0.09051),
      children=[
      Shape(
        #  Arc 8.15 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.05221,radius=0.02000))]),
    Transform(rotation=(-1.35899,0.00000,4.85251,1.83543),translation=(-0.33921,1.60542,0.12537),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58059,0.00000,23.70949,0.97371),translation=(-0.55794,1.65931,0.07441),
      children=[
      Shape(
        #  Arc 8.38 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29200,radius=0.02000))]),
    Transform(rotation=(-4.58059,0.00000,23.70949,0.97371),translation=(-0.54657,1.65144,0.07660),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.67580,1.74747,0.05929),
      children=[
      Shape(
        #  Arc 8.46 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58761,radius=0.02000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.78347,1.82501,0.04198),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.40635,-0.00000,8.25605,2.21324),translation=(-0.48067,1.45210,0.25934),
      children=[
      Shape(
        #  Arc 8.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41769,radius=0.02000))]),
    Transform(rotation=(32.40635,-0.00000,8.25605,2.21324),translation=(-0.49033,1.42283,0.29724),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.42753,0.00000,3.80550,2.12052),translation=(-0.45842,1.56477,0.09017),
      children=[
      Shape(
        #  Arc 8.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04767,radius=0.02000))]),
    Transform(rotation=(-1.42753,0.00000,3.80550,2.12052),translation=(-0.34971,1.63592,0.13095),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.51891,0.00000,51.54746,0.95765),translation=(-0.69713,1.76049,0.05971),
      children=[
      Shape(
        #  Arc 8.63 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63696,radius=0.02000))]),
    Transform(rotation=(-7.51891,0.00000,51.54746,0.95765),translation=(-0.82538,1.85169,0.04101),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.88319,0.00000,49.89821,0.95366),translation=(-0.68888,1.75646,0.05789),
      children=[
      Shape(
        #  Arc 8.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61943,radius=0.02000))]),
    Transform(rotation=(-7.88319,0.00000,49.89821,0.95366),translation=(-0.80949,1.84310,0.03884),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.15857,0.00000,2.00519,0.14775),translation=(-0.44942,1.65503,0.09152),
      children=[
      Shape(
        #  Arc 8.126 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.15732,radius=0.02000))]),
    Transform(rotation=(-1.15857,0.00000,2.00519,0.14775),translation=(-0.43905,1.57457,0.09751),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.45623,0.00000,21.62048,0.97399),translation=(-0.54749,1.65222,0.07503),
      children=[
      Shape(
        #  Arc 8.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26688,radius=0.02000))]),
    Transform(rotation=(-4.45623,0.00000,21.62048,0.97399),translation=(-0.52598,1.63730,0.07946),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.33515,0.00000,22.56681,0.97819),translation=(-0.55223,1.65459,0.07563),
      children=[
      Shape(
        #  Arc 8.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27703,radius=0.02000))]),
    Transform(rotation=(-4.33515,0.00000,22.56681,0.97819),translation=(-0.53473,1.64259,0.07900),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 8.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58732,0.00000,22.43715,0.97194),translation=(-0.55158,1.65537,0.07437),
      children=[
      Shape(
        #  Arc 8.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27726,radius=0.02000))]),
    Transform(rotation=(-4.58732,0.00000,22.43715,0.97194),translation=(-0.53428,1.64333,0.07791),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.67580,1.74747,0.05929),
      children=[
      Shape(
        #  Arc 8.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58761,radius=0.02000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.78347,1.82501,0.04198),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.30321,0.00000,-57.18810,1.66445),translation=(-0.15345,1.54567,0.27383),
      children=[
      Shape(
        #  Arc 8.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.67503,radius=0.02000))]),
    Transform(rotation=(35.30321,0.00000,-57.18810,1.66445),translation=(-0.00306,1.52907,0.36666),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.67192,0.00000,-4.70036,2.75665),translation=(-0.41589,1.23084,-0.04105),
      children=[
      Shape(
        #  Arc 8.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.74748,radius=0.02000))]),
    Transform(rotation=(-27.67192,0.00000,-4.70036,2.75665),translation=(-0.40245,1.03274,-0.12018),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.75941,0.00000,22.60087,1.06815),translation=(-0.55240,1.63939,0.09351),
      children=[
      Shape(
        #  Arc 8.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25805,radius=0.02000))]),
    Transform(rotation=(-0.75941,0.00000,22.60087,1.06815),translation=(-0.52527,1.62446,0.09442),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.11862,0.00000,21.34660,1.48450),translation=(-0.54612,1.58744,0.04672),
      children=[
      Shape(
        #  Arc 8.203 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.23712,radius=0.02000))]),
    Transform(rotation=(-10.11862,0.00000,21.34660,1.48450),translation=(-0.50882,1.58387,0.06440),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 8.212 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.22242,0.00000,-68.46873,1.88977),translation=(-0.09705,1.46370,0.12842),
      children=[
      Shape(
        #  Arc 8.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72403,radius=0.02000))]),
    Transform(rotation=(6.22242,0.00000,-68.46873,1.88977),translation=(0.09399,1.40035,0.14578),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 8.251 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.52962,0.00000,-55.73475,1.51541),translation=(-0.16072,1.59360,-0.00034),
      children=[
      Shape(
        #  Arc 8.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59148,radius=0.02000))]),
    Transform(rotation=(-19.52962,0.00000,-55.73475,1.51541),translation=(-0.03281,1.60111,-0.04516),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.35899,0.00000,4.85251,1.83543),translation=(-0.46365,1.57040,0.09051),
      children=[
      Shape(
        #  Arc 9.15 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.05221,radius=0.02000))]),
    Transform(rotation=(-1.35899,0.00000,4.85251,1.83543),translation=(-0.33921,1.60542,0.12537),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58059,0.00000,23.70949,0.97371),translation=(-0.55794,1.65931,0.07441),
      children=[
      Shape(
        #  Arc 9.38 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29200,radius=0.02000))]),
    Transform(rotation=(-4.58059,0.00000,23.70949,0.97371),translation=(-0.54657,1.65144,0.07660),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.67580,1.74747,0.05929),
      children=[
      Shape(
        #  Arc 9.46 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58761,radius=0.02000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.78347,1.82501,0.04198),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.40635,-0.00000,8.25605,2.21324),translation=(-0.48067,1.45210,0.25934),
      children=[
      Shape(
        #  Arc 9.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41769,radius=0.02000))]),
    Transform(rotation=(32.40635,-0.00000,8.25605,2.21324),translation=(-0.49033,1.42283,0.29724),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.42753,0.00000,3.80550,2.12052),translation=(-0.45842,1.56477,0.09017),
      children=[
      Shape(
        #  Arc 9.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04767,radius=0.02000))]),
    Transform(rotation=(-1.42753,0.00000,3.80550,2.12052),translation=(-0.34971,1.63592,0.13095),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.51891,0.00000,51.54746,0.95765),translation=(-0.69713,1.76049,0.05971),
      children=[
      Shape(
        #  Arc 9.63 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63696,radius=0.02000))]),
    Transform(rotation=(-7.51891,0.00000,51.54746,0.95765),translation=(-0.82538,1.85169,0.04101),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.88319,0.00000,49.89821,0.95366),translation=(-0.68888,1.75646,0.05789),
      children=[
      Shape(
        #  Arc 9.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61943,radius=0.02000))]),
    Transform(rotation=(-7.88319,0.00000,49.89821,0.95366),translation=(-0.80949,1.84310,0.03884),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.15857,0.00000,2.00519,0.14775),translation=(-0.44942,1.65503,0.09152),
      children=[
      Shape(
        #  Arc 9.126 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.15732,radius=0.02000))]),
    Transform(rotation=(-1.15857,0.00000,2.00519,0.14775),translation=(-0.43905,1.57457,0.09751),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.45623,0.00000,21.62048,0.97399),translation=(-0.54749,1.65222,0.07503),
      children=[
      Shape(
        #  Arc 9.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26688,radius=0.02000))]),
    Transform(rotation=(-4.45623,0.00000,21.62048,0.97399),translation=(-0.52598,1.63730,0.07946),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.33515,0.00000,22.56681,0.97819),translation=(-0.55223,1.65459,0.07563),
      children=[
      Shape(
        #  Arc 9.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27703,radius=0.02000))]),
    Transform(rotation=(-4.33515,0.00000,22.56681,0.97819),translation=(-0.53473,1.64259,0.07900),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 9.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.58732,0.00000,22.43715,0.97194),translation=(-0.55158,1.65537,0.07437),
      children=[
      Shape(
        #  Arc 9.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27726,radius=0.02000))]),
    Transform(rotation=(-4.58732,0.00000,22.43715,0.97194),translation=(-0.53428,1.64333,0.07791),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.67580,1.74747,0.05929),
      children=[
      Shape(
        #  Arc 9.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58761,radius=0.02000))]),
    Transform(rotation=(-7.60352,0.00000,47.28258,0.95273),translation=(-0.78347,1.82501,0.04198),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.30321,0.00000,-57.18810,1.66445),translation=(-0.15345,1.54567,0.27383),
      children=[
      Shape(
        #  Arc 9.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.67503,radius=0.02000))]),
    Transform(rotation=(35.30321,0.00000,-57.18810,1.66445),translation=(-0.00306,1.52907,0.36666),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.67192,0.00000,-4.70036,2.75665),translation=(-0.41589,1.23084,-0.04105),
      children=[
      Shape(
        #  Arc 9.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.74748,radius=0.02000))]),
    Transform(rotation=(-27.67192,0.00000,-4.70036,2.75665),translation=(-0.40245,1.03274,-0.12018),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.75941,0.00000,22.60087,1.06815),translation=(-0.55240,1.63939,0.09351),
      children=[
      Shape(
        #  Arc 9.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25805,radius=0.02000))]),
    Transform(rotation=(-0.75941,0.00000,22.60087,1.06815),translation=(-0.52527,1.62446,0.09442),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.11862,0.00000,21.34660,1.48450),translation=(-0.54612,1.58744,0.04672),
      children=[
      Shape(
        #  Arc 9.203 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.23712,radius=0.02000))]),
    Transform(rotation=(-10.11862,0.00000,21.34660,1.48450),translation=(-0.50882,1.58387,0.06440),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 9.212 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.22242,0.00000,-68.46873,1.88977),translation=(-0.09705,1.46370,0.12842),
      children=[
      Shape(
        #  Arc 9.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72403,radius=0.02000))]),
    Transform(rotation=(6.22242,0.00000,-68.46873,1.88977),translation=(0.09399,1.40035,0.14578),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.67657,1.74840,0.05996),
      children=[
      Shape(
        #  Arc 9.251 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.58973,radius=0.02000))]),
    Transform(rotation=(-7.47036,0.00000,47.43507,0.95145),translation=(-0.78505,1.82669,0.04287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.52962,0.00000,-55.73475,1.51541),translation=(-0.16072,1.59360,-0.00034),
      children=[
      Shape(
        #  Arc 9.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.59148,radius=0.02000))]),
    Transform(rotation=(-19.52962,0.00000,-55.73475,1.51541),translation=(-0.03281,1.60111,-0.04516),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.14684,-0.00000,44.86706,1.82925),translation=(-0.83105,0.70316,1.47547),
      children=[
      Shape(
        #  Arc 10.29 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60250,radius=0.02000))]),
    Transform(rotation=(37.14684,-0.00000,44.86706,1.82925),translation=(-0.93624,0.66705,1.56256),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(4.98207,-0.00000,28.66931,2.51260),translation=(-0.75006,0.58018,1.31465),
      children=[
      Shape(
        #  Arc 10.33 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.49460,radius=0.02000))]),
    Transform(rotation=(4.98207,-0.00000,28.66931,2.51260),translation=(-0.80067,0.50958,1.32344),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-86.83646,0.00000,-8.47651,1.01096),translation=(-0.56433,1.05356,0.85556),
      children=[
      Shape(
        #  Arc 10.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02968,radius=0.02000))]),
    Transform(rotation=(-86.83646,0.00000,-8.47651,1.01096),translation=(-0.53512,1.24200,0.55631),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(60.82973,-0.00000,88.93831,1.58198),translation=(-1.05141,0.77413,1.59389),
      children=[
      Shape(
        #  Arc 10.83 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.07758,radius=0.02000))]),
    Transform(rotation=(60.82973,-0.00000,88.93831,1.58198),translation=(-1.36404,0.76989,1.80771),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-14.10567,0.00000,-115.53063,1.16400),translation=(-0.02906,1.03087,1.21921),
      children=[
      Shape(
        #  Arc 10.86 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.26731,radius=0.02000))]),
    Transform(rotation=(-14.10567,0.00000,-115.53063,1.16400),translation=(0.40273,1.21828,1.16649),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.93507,0.00000,39.04402,2.60830),translation=(-0.80194,0.44937,1.28506),
      children=[
      Shape(
        #  Arc 10.92 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.76824,radius=0.02000))]),
    Transform(rotation=(-0.93507,0.00000,39.04402,2.60830),translation=(-0.91584,0.25638,1.28233),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.64817,-0.00000,29.01412,1.45507),translation=(-0.75179,0.81061,1.50798),
      children=[
      Shape(
        #  Arc 10.97 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52765,radius=0.02000))]),
    Transform(rotation=(43.64817,-0.00000,29.01412,1.45507),translation=(-0.80888,0.82260,1.59386),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(65.01620,-0.00000,79.67719,1.70380),translation=(-1.00510,0.71135,1.61482),
      children=[
      Shape(
        #  Arc 10.98 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.03754,radius=0.02000))]),
    Transform(rotation=(65.01620,-0.00000,79.67719,1.70380),translation=(-1.28062,0.66378,1.83964),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(64.30351,-0.00000,86.33547,1.62387),translation=(-1.03839,0.75156,1.61126),
      children=[
      Shape(
        #  Arc 10.105 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.07803,radius=0.02000))]),
    Transform(rotation=(64.30351,-0.00000,86.33547,1.62387),translation=(-1.34193,0.73145,1.83733),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(86.25518,-0.00000,41.37501,1.69225),translation=(-0.81359,0.72177,1.72101),
      children=[
      Shape(
        #  Arc 10.107 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96375,radius=0.02000))]),
    Transform(rotation=(86.25518,-0.00000,41.37501,1.69225),translation=(-0.95178,0.68277,2.00909),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.35855,-0.00000,14.95156,2.22245),translation=(-0.68148,0.71818,1.32153),
      children=[
      Shape(
        #  Arc 10.122 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.20435,radius=0.02000))]),
    Transform(rotation=(6.35855,-0.00000,14.95156,2.22245),translation=(-0.63917,0.75325,1.30354),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.14684,-0.00000,44.86706,1.82925),translation=(-0.83105,0.70316,1.47547),
      children=[
      Shape(
        #  Arc 10.129 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60250,radius=0.02000))]),
    Transform(rotation=(37.14684,-0.00000,44.86706,1.82925),translation=(-0.93624,0.66705,1.56256),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(41.16767,-0.00000,51.02732,1.72069),translation=(-0.86185,0.73064,1.49558),
      children=[
      Shape(
        #  Arc 10.133 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66307,radius=0.02000))]),
    Transform(rotation=(41.16767,-0.00000,51.02732,1.72069),translation=(-0.99386,0.70503,1.60208),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-22.60026,0.00000,-70.32281,1.29267),translation=(-0.25510,0.88561,1.17674),
      children=[
      Shape(
        #  Arc 10.139 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.76817,radius=0.02000))]),
    Transform(rotation=(-22.60026,0.00000,-70.32281,1.29267),translation=(-0.04996,0.94713,1.11081),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(85.75517,-0.00000,41.14072,1.63061),translation=(-0.81242,0.75167,1.71851),
      children=[
      Shape(
        #  Arc 10.140 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.95284,radius=0.02000))]),
    Transform(rotation=(85.75517,-0.00000,41.14072,1.63061),translation=(-0.94904,0.73276,2.00329),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(82.36614,-0.00000,64.93732,1.83238),translation=(-0.93140,0.63976,1.70157),
      children=[
      Shape(
        #  Arc 10.146 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.08579,radius=0.02000))]),
    Transform(rotation=(82.36614,-0.00000,64.93732,1.83238),translation=(-1.16040,0.54074,1.99203),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(2.01007,0.00000,-18.82225,0.58413),translation=(-0.51261,0.92332,1.29979),
      children=[
      Shape(
        #  Arc 10.163 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.34325,radius=0.02000))]),
    Transform(rotation=(2.01007,0.00000,-18.82225,0.58413),translation=(-0.50623,0.93302,1.30047),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.22955,-0.00000,45.35400,1.81207),translation=(-0.83349,0.70796,1.47589),
      children=[
      Shape(
        #  Arc 10.164 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60428,radius=0.02000))]),
    Transform(rotation=(37.22955,-0.00000,45.35400,1.81207),translation=(-0.94017,0.67400,1.56346),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(80.59151,-0.00000,67.36649,1.82405),translation=(-0.94355,0.64422,1.69270),
      children=[
      Shape(
        #  Arc 10.171 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.08500,radius=0.02000))]),
    Transform(rotation=(80.59151,-0.00000,67.36649,1.82405),translation=(-1.18104,0.54838,1.97681),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(39.16639,0.00000,-5.02409,1.40467),translation=(-0.58160,0.81326,1.48557),
      children=[
      Shape(
        #  Arc 10.193 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40039,radius=0.02000))]),
    Transform(rotation=(39.16639,0.00000,-5.02409,1.40467),translation=(-0.57655,0.81990,1.52489),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.49649,-0.00000,6.71037,1.62539),translation=(-0.64027,0.77109,1.45222),
      children=[
      Shape(
        #  Arc 10.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.33232,radius=0.02000))]),
    Transform(rotation=(32.49649,-0.00000,6.71037,1.62539),translation=(-0.64151,0.77075,1.45824),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(63.85650,-0.00000,81.03736,1.67156),translation=(-1.01190,0.72800,1.60902),
      children=[
      Shape(
        #  Arc 10.230 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.03699,radius=0.02000))]),
    Transform(rotation=(63.85650,-0.00000,81.03736,1.67156),translation=(-1.29206,0.69193,1.82978),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(41.58145,-0.00000,50.08160,1.75117),translation=(-0.85713,0.72080,1.49764),
      children=[
      Shape(
        #  Arc 10.240 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66167,radius=0.02000))]),
    Transform(rotation=(41.58145,-0.00000,50.08160,1.75117),translation=(-0.98643,0.69015,1.60500),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-73.17911,0.00000,-49.61307,1.70213),translation=(-0.35865,0.72176,0.92384),
      children=[
      Shape(
        #  Arc 10.241 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89180,radius=0.02000))]),
    Transform(rotation=(-73.17911,0.00000,-49.61307,1.70213),translation=(-0.19960,0.68432,0.68924),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-62.31836,0.00000,-31.84062,2.00327),translation=(-0.44751,0.61863,0.97815),
      children=[
      Shape(
        #  Arc 10.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.77078,radius=0.02000))]),
    Transform(rotation=(-62.31836,0.00000,-31.84062,2.00327),translation=(-0.35441,0.52416,0.79592),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(30.63925,-0.00000,4.42887,1.51156),translation=(-0.62886,0.78933,1.44293),
      children=[
      Shape(
        #  Arc 10.245 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.31012,radius=0.02000))]),
    Transform(rotation=(30.63925,-0.00000,4.42887,1.51156),translation=(-0.62816,0.78904,1.43805),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-21.12804,0.00000,-95.67507,1.82523),translation=(2.18992,-0.84864,-0.52332),
      children=[
      Shape(
        #  Arc 11.16 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.01239,radius=0.02000))]),
    Transform(rotation=(-21.12804,0.00000,-95.67507,1.82523),translation=(2.51709,-0.93578,-0.59556),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(15.65768,0.00000,-60.29268,2.40695),translation=(2.01301,-1.06604,-0.33939),
      children=[
      Shape(
        #  Arc 11.37 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.92930,radius=0.02000))]),
    Transform(rotation=(15.65768,0.00000,-60.29268,2.40695),translation=(2.21066,-1.29211,-0.28806),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(8.67605,0.00000,-47.60229,2.03360),translation=(1.94956,-0.84195,-0.37430),
      children=[
      Shape(
        #  Arc 11.43 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.54075,radius=0.02000))]),
    Transform(rotation=(8.67605,0.00000,-47.60229,2.03360),translation=(2.04672,-0.89123,-0.35659),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(24.62944,0.00000,-83.99732,2.15404),translation=(2.13153,-1.01002,-0.29453),
      children=[
      Shape(
        #  Arc 11.50 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04871,radius=0.02000))]),
    Transform(rotation=(24.62944,0.00000,-83.99732,2.15404),translation=(2.42336,-1.21068,-0.20896),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-12.15629,0.00000,107.97869,1.38533),translation=(1.17165,-0.61930,-0.47846),
      children=[
      Shape(
        #  Arc 11.58 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.10557,radius=0.02000))]),
    Transform(rotation=(-12.15629,0.00000,107.97869,1.38533),translation=(0.78803,-0.54687,-0.52165),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(77.20060,-0.00000,26.68266,2.40714),translation=(1.57813,-1.17354,-0.03167),
      children=[
      Shape(
        #  Arc 11.59 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.21881,radius=0.02000))]),
    Transform(rotation=(77.20060,-0.00000,26.68266,2.40714),translation=(1.47975,-1.50708,0.25298),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-29.61256,0.00000,-48.87656,1.94729),translation=(1.95593,-0.83420,-0.56574),
      children=[
      Shape(
        #  Arc 11.61 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61451,radius=0.02000))]),
    Transform(rotation=(-29.61256,0.00000,-48.87656,1.94729),translation=(2.07305,-0.88835,-0.63670),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-81.81848,0.00000,-23.10990,1.99487),translation=(1.82709,-0.91315,-0.82677),
      children=[
      Shape(
        #  Arc 11.74 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.93282,radius=0.02000))]),
    Transform(rotation=(-81.81848,0.00000,-23.10990,1.99487),translation=(1.90301,-1.03923,-1.09552),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(7.88022,0.00000,-103.06153,1.86017),translation=(2.22685,-0.87511,-0.37827),
      children=[
      Shape(
        #  Arc 11.87 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.07846,radius=0.02000))]),
    Transform(rotation=(7.88022,0.00000,-103.06153,1.86017),translation=(2.58926,-0.98332,-0.35056),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(20.69162,0.00000,-92.20721,1.75809),translation=(2.17258,-0.81078,-0.31422),
      children=[
      Shape(
        #  Arc 11.94 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96182,radius=0.02000))]),
    Transform(rotation=(20.69162,0.00000,-92.20721,1.75809),translation=(2.48023,-0.87054,-0.24518),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.99848,0.00000,-68.58067,1.09060),translation=(2.05445,-0.51043,-0.20268),
      children=[
      Shape(
        #  Arc 11.104 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.91268,radius=0.02000))]),
    Transform(rotation=(42.99848,0.00000,-68.58067,1.09060),translation=(2.27712,-0.37354,-0.06307),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(0.36770,0.00000,-8.65567,2.97547),translation=(1.75482,-0.97960,-0.41584),
      children=[
      Shape(
        #  Arc 11.106 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52393,radius=0.02000))]),
    Transform(rotation=(0.36770,0.00000,-8.65567,2.97547),translation=(1.77167,-1.08016,-0.41512),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.42013,0.00000,-38.58048,2.34906),translation=(1.90445,-0.91215,-0.43478),
      children=[
      Shape(
        #  Arc 11.110 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.54388,radius=0.02000))]),
    Transform(rotation=(-3.42013,0.00000,-38.58048,2.34906),translation=(1.98385,-0.99074,-0.44182),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-86.41112,0.00000,-66.27277,2.01126),translation=(2.04291,-0.97789,-0.84973),
      children=[
      Shape(
        #  Arc 11.113 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.20390,radius=0.02000))]),
    Transform(rotation=(-86.41112,0.00000,-66.27277,2.01126),translation=(2.28619,-1.16632,-1.16694),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(20.29891,0.00000,-13.04742,0.48578),translation=(1.77678,-0.49272,-0.31618),
      children=[
      Shape(
        #  Arc 11.119 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51682,radius=0.02000))]),
    Transform(rotation=(20.29891,0.00000,-13.04742,0.48578),translation=(1.80163,-0.40570,-0.27753),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.63142,0.00000,-30.44541,1.52231),translation=(1.86377,-0.71333,-0.35952),
      children=[
      Shape(
        #  Arc 11.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.32630,radius=0.02000))]),
    Transform(rotation=(11.63142,0.00000,-30.44541,1.52231),translation=(1.86671,-0.71318,-0.35840),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(40.60151,-0.00000,9.89950,0.53619),translation=(1.66205,-0.36962,-0.21467),
      children=[
      Shape(
        #  Arc 11.136 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.81805,radius=0.02000))]),
    Transform(rotation=(40.60151,-0.00000,9.89950,0.53619),translation=(1.63191,-0.15554,-0.09107),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(32.49952,0.00000,-71.88953,1.16480),translation=(2.07099,-0.55166,-0.25518),
      children=[
      Shape(
        #  Arc 11.138 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.85875,radius=0.02000))]),
    Transform(rotation=(32.49952,0.00000,-71.88953,1.16480),translation=(2.29650,-0.44528,-0.15323),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(24.62944,0.00000,-83.99732,2.15404),translation=(2.13153,-1.01002,-0.29453),
      children=[
      Shape(
        #  Arc 11.151 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04871,radius=0.02000))]),
    Transform(rotation=(24.62944,0.00000,-83.99732,2.15404),translation=(2.42336,-1.21068,-0.20896),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(7.88022,0.00000,-103.06153,1.86017),translation=(2.22685,-0.87511,-0.37827),
      children=[
      Shape(
        #  Arc 11.154 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.07846,radius=0.02000))]),
    Transform(rotation=(7.88022,0.00000,-103.06153,1.86017),translation=(2.58926,-0.98332,-0.35056),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-16.71094,0.00000,114.57678,1.51185),translation=(1.13866,-0.68707,-0.50123),
      children=[
      Shape(
        #  Arc 11.155 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.15990,radius=0.02000))]),
    Transform(rotation=(-16.71094,0.00000,114.57678,1.51185),translation=(0.72383,-0.66233,-0.56173),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-78.55053,0.00000,-21.54954,1.98660),translation=(1.81929,-0.90107,-0.81043),
      children=[
      Shape(
        #  Arc 11.159 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89040,radius=0.02000))]),
    Transform(rotation=(-78.55053,0.00000,-21.54954,1.98660),translation=(1.88832,-1.01627,-1.06203),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-14.62474,0.00000,34.85253,2.31973),translation=(1.53728,-0.89692,-0.49080),
      children=[
      Shape(
        #  Arc 11.161 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51606,radius=0.02000))]),
    Transform(rotation=(-14.62474,0.00000,34.85253,2.31973),translation=(1.47108,-0.96366,-0.51858),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(56.19267,-0.00000,39.11008,0.47886),translation=(1.51599,-0.06188,-0.13671),
      children=[
      Shape(
        #  Arc 11.162 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.48585,radius=0.02000))]),
    Transform(rotation=(56.19267,-0.00000,39.11008,0.47886),translation=(1.36256,0.45548,0.08374),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.65277,0.00000,-34.07166,2.23262),translation=(1.88190,-0.89216,-0.55594),
      children=[
      Shape(
        #  Arc 11.165 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55625,radius=0.02000))]),
    Transform(rotation=(-27.65277,0.00000,-34.07166,2.23262),translation=(1.95426,-0.96475,-0.61466),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.24663,0.00000,34.68912,2.29067),translation=(1.53810,-0.87982,-0.46891),
      children=[
      Shape(
        #  Arc 11.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.48106,radius=0.02000))]),
    Transform(rotation=(-10.24663,0.00000,34.68912,2.29067),translation=(1.48003,-0.93291,-0.48606),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(3.65262,0.00000,-25.71427,2.42377),translation=(1.84012,-0.86995,-0.39941),
      children=[
      Shape(
        #  Arc 11.175 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.39487,radius=0.02000))]),
    Transform(rotation=(3.65262,0.00000,-25.71427,2.42377),translation=(1.86449,-0.89815,-0.39595),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-80.23829,0.00000,-29.13174,1.97095),translation=(1.85720,-0.90177,-0.81887),
      children=[
      Shape(
        #  Arc 11.184 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.92685,radius=0.02000))]),
    Transform(rotation=(-80.23829,0.00000,-29.13174,1.97095),translation=(1.95257,-1.01997,-1.08154),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(59.68976,-0.00000,4.78872,0.55528),translation=(1.68760,-0.23863,-0.11923),
      children=[
      Shape(
        #  Arc 11.189 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13588,radius=0.02000))]),
    Transform(rotation=(59.68976,-0.00000,4.78872,0.55528),translation=(1.67040,0.10802,0.09514),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.31039,0.00000,-39.87036,2.52907),translation=(1.91090,-1.14012,-0.20112),
      children=[
      Shape(
        #  Arc 11.202 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02391,radius=0.02000))]),
    Transform(rotation=(43.31039,0.00000,-39.87036,2.52907),translation=(2.04795,-1.42809,-0.05225),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-82.74789,0.00000,-22.66293,1.98294),translation=(1.82486,-0.90878,-0.83141),
      children=[
      Shape(
        #  Arc 11.204 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.93636,radius=0.02000))]),
    Transform(rotation=(-82.74789,0.00000,-22.66293,1.98294),translation=(1.89945,-1.03223,-1.10376),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(65.63513,0.00000,-13.68791,2.46502),translation=(1.77998,-1.13871,-0.08950),
      children=[
      Shape(
        #  Arc 11.207 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.07083,radius=0.02000))]),
    Transform(rotation=(65.63513,0.00000,-13.68791,2.46502),translation=(1.82797,-1.43143,0.14061),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.84489,0.00000,-77.38759,1.91953),translation=(2.09848,-0.89263,-0.68690),
      children=[
      Shape(
        #  Arc 11.214 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.00315,radius=0.02000))]),
    Transform(rotation=(-53.84489,0.00000,-77.38759,1.91953),translation=(2.36199,-1.00935,-0.87024),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(24.15220,0.00000,-37.02038,1.08732),translation=(1.89665,-0.60520,-0.29691),
      children=[
      Shape(
        #  Arc 11.217 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.49924,radius=0.02000))]),
    Transform(rotation=(24.15220,0.00000,-37.02038,1.08732),translation=(1.96310,-0.56354,-0.25356),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.27704,0.00000,120.33185,1.39938),translation=(1.10989,-0.61645,-0.48406),
      children=[
      Shape(
        #  Arc 11.219 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.22863,radius=0.02000))]),
    Transform(rotation=(-13.27704,0.00000,120.33185,1.39938),translation=(0.66493,-0.53895,-0.53316),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.87422,0.00000,117.23855,1.43472),translation=(1.12535,-0.64096,-0.42705),
      children=[
      Shape(
        #  Arc 11.229 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.18348,radius=0.02000))]),
    Transform(rotation=(-1.87422,0.00000,117.23855,1.43472),translation=(0.69766,-0.58239,-0.43388),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-14.71599,0.00000,32.56026,2.27327),translation=(1.54874,-0.87248,-0.49126),
      children=[
      Shape(
        #  Arc 11.235 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.46815,radius=0.02000))]),
    Transform(rotation=(-14.71599,0.00000,32.56026,2.27327),translation=(1.49722,-0.92034,-0.51454),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-33.78359,0.00000,-33.76009,2.14691),translation=(1.88035,-0.87637,-0.58659),
      children=[
      Shape(
        #  Arc 11.258 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.56954,radius=0.02000))]),
    Transform(rotation=(-33.78359,0.00000,-33.76009,2.14691),translation=(1.95430,-0.94434,-0.66060),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-20.62931,0.00000,67.86089,2.22953),translation=(1.37224,-0.99575,-0.52082),
      children=[
      Shape(
        #  Arc 11.259 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89694,radius=0.02000))]),
    Transform(rotation=(-20.62931,0.00000,67.86089,2.22953),translation=(1.15399,-1.17233,-0.58717),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(8.86716,0.00000,-36.40781,2.38836),translation=(1.89358,-0.92106,-0.37334),
      children=[
      Shape(
        #  Arc 11.260 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.54784,radius=0.02000))]),
    Transform(rotation=(8.86716,0.00000,-36.40781,2.38836),translation=(1.96929,-1.00416,-0.35490),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-42.91530,0.00000,-83.10989,2.02375),translation=(2.12709,-0.94886,-0.63225),
      children=[
      Shape(
        #  Arc 11.261 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04026,radius=0.02000))]),
    Transform(rotation=(-42.91530,0.00000,-83.10989,2.02375),translation=(2.41481,-1.10646,-0.78082),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-105.16999,0.00000,-29.16357,1.97066),translation=(1.85736,-0.95186,-0.94353),
      children=[
      Shape(
        #  Arc 11.263 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.18485,radius=0.02000))]),
    Transform(rotation=(-105.16999,0.00000,-29.16357,1.97066),translation=(1.96380,-1.12020,-1.32736),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-38.29672,0.00000,-31.49382,1.81964),translation=(2.17330,-1.37472,-2.07864),
      children=[
      Shape(
        #  Arc 12.36 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51159,radius=0.02000))]),
    Transform(rotation=(-38.29672,0.00000,-31.49382,1.81964),translation=(2.23227,-1.39831,-2.15035),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.47625,0.00000,-72.60226,1.85757),translation=(2.37884,-1.41908,-1.85978),
      children=[
      Shape(
        #  Arc 12.40 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.75908,radius=0.02000))]),
    Transform(rotation=(5.47625,0.00000,-72.60226,1.85757),translation=(2.58882,-1.48118,-1.84394),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.30219,-0.00000,118.83874,1.24128),translation=(1.42163,-1.09603,-1.67565),
      children=[
      Shape(
        #  Arc 12.66 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.33316,radius=0.02000))]),
    Transform(rotation=(42.30219,-0.00000,118.83874,1.24128),translation=(0.97007,-0.93210,-1.51491),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(65.12990,-0.00000,7.31840,1.26535),translation=(1.97924,-1.20840,-1.56151),
      children=[
      Shape(
        #  Arc 12.74 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68721,radius=0.02000))]),
    Transform(rotation=(65.12990,-0.00000,7.31840,1.26535),translation=(1.95968,-1.15318,-1.38750),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(60.53726,0.00000,-35.84446,1.46152),translation=(2.19505,-1.27313,-1.58447),
      children=[
      Shape(
        #  Arc 12.113 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.70775,radius=0.02000))]),
    Transform(rotation=(60.53726,0.00000,-35.84446,1.46152),translation=(2.29324,-1.25198,-1.41864),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.37910,0.00000,-4.25693,1.89553),translation=(2.03711,-1.40186,-2.15405),
      children=[
      Shape(
        #  Arc 12.114 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.56502,radius=0.02000))]),
    Transform(rotation=(-53.37910,0.00000,-4.25693,1.89553),translation=(2.04634,-1.44094,-2.26979),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-71.78658,0.00000,-3.18638,2.21165),translation=(2.03176,-1.57970,-2.24609),
      children=[
      Shape(
        #  Arc 12.116 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89644,radius=0.02000))]),
    Transform(rotation=(-71.78658,0.00000,-3.18638,2.21165),translation=(2.04200,-1.75202,-2.47690),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-80.53785,0.00000,-38.19459,1.67216),translation=(2.20680,-1.35706,-2.28985),
      children=[
      Shape(
        #  Arc 12.134 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89596,radius=0.02000))]),
    Transform(rotation=(-80.53785,0.00000,-38.19459,1.67216),translation=(2.32957,-1.38620,-2.54871),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-64.92910,0.00000,-31.29144,2.12828),translation=(2.17228,-1.53640,-2.21180),
      children=[
      Shape(
        #  Arc 12.143 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.84936,radius=0.02000))]),
    Transform(rotation=(-64.92910,0.00000,-31.29144,2.12828),translation=(2.26980,-1.67644,-2.41414),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-48.68337,0.00000,-16.40314,1.79246),translation=(2.09784,-1.36961,-2.13058),
      children=[
      Shape(
        #  Arc 12.145 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52661,radius=0.02000))]),
    Transform(rotation=(-48.68337,0.00000,-16.40314,1.79246),translation=(2.13002,-1.39232,-2.22608),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-85.42736,0.00000,-6.46983,1.86757),translation=(2.04818,-1.44272,-2.31430),
      children=[
      Shape(
        #  Arc 12.156 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89588,radius=0.02000))]),
    Transform(rotation=(-85.42736,0.00000,-6.46983,1.86757),translation=(2.06897,-1.52692,-2.58886),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-31.67055,0.00000,-16.68193,2.25268),translation=(2.09924,-1.45701,-2.04551),
      children=[
      Shape(
        #  Arc 12.158 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.46105,radius=0.02000))]),
    Transform(rotation=(-31.67055,0.00000,-16.68193,2.25268),translation=(2.12476,-1.50146,-2.09396),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(68.39784,-0.00000,8.87876,1.24784),translation=(1.97143,-1.19631,-1.54517),
      children=[
      Shape(
        #  Arc 12.159 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72732,radius=0.02000))]),
    Transform(rotation=(68.39784,-0.00000,8.87876,1.24784),translation=(1.94657,-1.13167,-1.35365),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(66.71009,-0.00000,1.29657,1.23962),translation=(2.00934,-1.19701,-1.55361),
      children=[
      Shape(
        #  Arc 12.184 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.70557,radius=0.02000))]),
    Transform(rotation=(66.71009,-0.00000,1.29657,1.23962),translation=(2.00580,-1.13433,-1.37134),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-83.12943,0.00000,-32.00802,1.67875),translation=(2.17587,-1.35999,-2.30281),
      children=[
      Shape(
        #  Arc 12.200 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89600,radius=0.02000))]),
    Transform(rotation=(-83.12943,0.00000,-32.00802,1.67875),translation=(2.27875,-1.39102,-2.57001),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(64.20049,-0.00000,7.76538,1.24926),translation=(1.97700,-1.20402,-1.56616),
      children=[
      Shape(
        #  Arc 12.204 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68162,radius=0.02000))]),
    Transform(rotation=(64.20049,-0.00000,7.76538,1.24926),translation=(1.95640,-1.14688,-1.39586),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-5.24440,0.00000,-26.82177,1.77163),translation=(2.14994,-1.33954,-1.91338),
      children=[
      Shape(
        #  Arc 12.205 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27890,radius=0.02000))]),
    Transform(rotation=(-5.24440,0.00000,-26.82177,1.77163),translation=(2.13018,-1.33544,-1.90952),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-67.19008,0.00000,-55.59013,1.73185),translation=(2.29378,-1.38256,-2.22311),
      children=[
      Shape(
        #  Arc 12.206 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.88349,radius=0.02000))]),
    Transform(rotation=(-67.19008,0.00000,-55.59013,1.73185),translation=(2.47105,-1.42774,-2.43738),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-44.01324,0.00000,-13.64259,1.95292),translation=(2.08404,-1.40431,-2.10723),
      children=[
      Shape(
        #  Arc 12.209 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.49661,radius=0.02000))]),
    Transform(rotation=(-44.01324,0.00000,-13.64259,1.95292),translation=(2.10830,-1.43724,-2.18549),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.13350,0.00000,-20.11515,2.16139),translation=(2.11640,-1.37915,-1.88783),
      children=[
      Shape(
        #  Arc 12.215 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.24218,radius=0.02000))]),
    Transform(rotation=(-0.13350,0.00000,-20.11515,2.16139),translation=(2.08408,-1.35748,-1.88761),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-29.63568,0.00000,-7.57800,1.93797),translation=(2.05372,-1.37055,-2.03534),
      children=[
      Shape(
        #  Arc 12.233 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.32774,radius=0.02000))]),
    Transform(rotation=(-29.63568,0.00000,-7.57800,1.93797),translation=(2.05461,-1.37194,-2.03884),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-40.76846,0.00000,-15.53575,2.13449),translation=(2.09351,-1.44961,-2.09100),
      children=[
      Shape(
        #  Arc 12.246 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51614,radius=0.02000))]),
    Transform(rotation=(-40.76846,0.00000,-15.53575,2.13449),translation=(2.12303,-1.50201,-2.16846),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-48.54279,0.00000,-19.14967,1.78917),translation=(2.11158,-1.36962,-2.12987),
      children=[
      Shape(
        #  Arc 12.249 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.53453,radius=0.02000))]),
    Transform(rotation=(-48.54279,0.00000,-19.14967,1.78917),translation=(2.15000,-1.39286,-2.22728),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(79.90637,-0.00000,137.83606,1.19951),translation=(1.32665,-1.00156,-1.48763),
      children=[
      Shape(
        #  Arc 12.253 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.70973,radius=0.02000))]),
    Transform(rotation=(79.90637,-0.00000,137.83606,1.19951),translation=(0.76646,-0.74946,-1.16287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-85.45258,0.00000,-6.50128,1.86675),translation=(2.04833,-1.44238,-2.31442),
      children=[
      Shape(
        #  Arc 12.256 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89595,radius=0.02000))]),
    Transform(rotation=(-85.45258,0.00000,-6.50128,1.86675),translation=(2.06923,-1.52637,-2.58908),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(41.77838,-0.00000,1.26474,1.27093),translation=(2.00950,-1.24711,-1.67827),
      children=[
      Shape(
        #  Arc 12.263 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43750,radius=0.02000))]),
    Transform(rotation=(41.77838,-0.00000,1.26474,1.27093),translation=(2.00781,-1.22975,-1.62217),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-2.87103,0.00000,-16.12932,2.37069),translation=(2.09647,-1.39605,-1.90151),
      children=[
      Shape(
        #  Arc 12.266 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.23512,radius=0.02000))]),
    Transform(rotation=(-2.87103,0.00000,-16.12932,2.37069),translation=(2.06736,-1.36561,-1.89633),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(47.99339,-0.00000,18.34120,0.92710),translation=(0.15434,1.79134,1.53129),
      children=[
      Shape(
        #  Arc 13.27 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64233,radius=0.02000))]),
    Transform(rotation=(47.99339,-0.00000,18.34120,0.92710),translation=(0.10832,1.88806,1.65171),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(86.30819,-0.00000,23.43566,0.99403),translation=(0.12887,1.88950,1.72286),
      children=[
      Shape(
        #  Arc 13.32 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.06693,radius=0.02000))]),
    Transform(rotation=(86.30819,-0.00000,23.43566,0.99403),translation=(0.04683,2.09316,2.02497),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(9.09716,-0.00000,13.91139,0.67127),translation=(0.17649,1.70322,1.33681),
      children=[
      Shape(
        #  Arc 13.35 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26724,radius=0.02000))]),
    Transform(rotation=(9.09716,-0.00000,13.91139,0.67127),translation=(0.19022,1.68256,1.32783),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.38881,-0.00000,19.12769,0.87814),translation=(0.15041,1.79533,1.50827),
      children=[
      Shape(
        #  Arc 13.45 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61618,radius=0.02000))]),
    Transform(rotation=(43.38881,-0.00000,19.12769,0.87814),translation=(0.10444,1.88990,1.61254),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(86.30770,-0.00000,23.43585,0.99402),translation=(0.12887,1.88950,1.72286),
      children=[
      Shape(
        #  Arc 13.48 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.06693,radius=0.02000))]),
    Transform(rotation=(86.30770,-0.00000,23.43585,0.99402),translation=(0.04683,2.09316,2.02497),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(47.99339,-0.00000,18.34120,0.92710),translation=(0.15434,1.79134,1.53129),
      children=[
      Shape(
        #  Arc 13.77 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64233,radius=0.02000))]),
    Transform(rotation=(47.99339,-0.00000,18.34120,0.92710),translation=(0.10832,1.88806,1.65171),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.47594,-0.00000,19.41935,0.86216),translation=(0.14895,1.79876,1.50370),
      children=[
      Shape(
        #  Arc 13.78 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61514,radius=0.02000))]),
    Transform(rotation=(42.47594,-0.00000,19.41935,0.86216),translation=(0.10236,1.89479,1.60560),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-95.49581,0.00000,-29.89348,1.45015),translation=(0.39551,1.65925,0.81384),
      children=[
      Shape(
        #  Arc 13.79 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.00798,radius=0.02000))]),
    Transform(rotation=(-95.49581,0.00000,-29.89348,1.45015),translation=(0.49753,1.70065,0.48795),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-14.26420,0.00000,-30.25432,2.32937),translation=(0.39732,1.44009,1.22000),
      children=[
      Shape(
        #  Arc 13.86 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.46084,radius=0.02000))]),
    Transform(rotation=(-14.26420,0.00000,-30.25432,2.32937),translation=(0.44355,1.39165,1.19821),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(86.30770,-0.00000,23.43585,0.99402),translation=(0.12887,1.88950,1.72286),
      children=[
      Shape(
        #  Arc 13.102 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.06693,radius=0.02000))]),
    Transform(rotation=(86.30770,-0.00000,23.43585,0.99402),translation=(0.04683,2.09316,2.02497),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(9.15774,-0.00000,38.42172,2.21346),translation=(0.05394,1.45073,1.33711),
      children=[
      Shape(
        #  Arc 13.111 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.49341,radius=0.02000))]),
    Transform(rotation=(9.15774,-0.00000,38.42172,2.21346),translation=(-0.01358,1.39877,1.35320),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.27277,0.00000,-35.76524,1.70392),translation=(0.42487,1.57447,1.26996),
      children=[
      Shape(
        #  Arc 13.112 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.36341,radius=0.02000))]),
    Transform(rotation=(-4.27277,0.00000,-35.76524,1.70392),translation=(0.44623,1.57159,1.26741),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.03631,0.00000,-9.57577,0.79381),translation=(0.29392,1.78667,1.47650),
      children=[
      Shape(
        #  Arc 13.115 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.53650,radius=0.02000))]),
    Transform(rotation=(37.03631,0.00000,-9.57577,0.79381),translation=(0.31325,1.86257,1.55123),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(46.73807,0.00000,-4.89032,1.00536),translation=(0.27050,1.74769,1.52501),
      children=[
      Shape(
        #  Arc 13.141 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55656,radius=0.02000))]),
    Transform(rotation=(46.73807,0.00000,-4.89032,1.00536),translation=(0.28089,1.81106,1.62434),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(70.41577,0.00000,-28.22871,1.10352),translation=(0.38719,1.78997,1.64340),
      children=[
      Shape(
        #  Arc 13.160 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.84973,radius=0.02000))]),
    Transform(rotation=(70.41577,0.00000,-28.22871,1.10352),translation=(0.47518,1.90928,1.86289),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(1.85155,-0.00000,66.45406,2.24578),translation=(-0.08622,1.33254,1.30058),
      children=[
      Shape(
        #  Arc 13.163 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.85152,radius=0.02000))]),
    Transform(rotation=(1.85155,-0.00000,66.45406,2.24578),translation=(-0.29363,1.16647,1.30636),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-84.09812,0.00000,11.35566,1.67003),translation=(0.18927,1.55635,0.87083),
      children=[
      Shape(
        #  Arc 13.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.85281,radius=0.02000))]),
    Transform(rotation=(-84.09812,0.00000,11.35566,1.67003),translation=(0.15379,1.52995,0.60812),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.48546,0.00000,-54.32554,1.76565),translation=(0.51767,1.54336,1.22390),
      children=[
      Shape(
        #  Arc 13.208 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57054,radius=0.02000))]),
    Transform(rotation=(-13.48546,0.00000,-54.32554,1.76565),translation=(0.63695,1.51910,1.19429),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(46.56263,-0.00000,40.06752,1.44279),translation=(0.04571,1.63812,1.52414),
      children=[
      Shape(
        #  Arc 13.223 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61935,radius=0.02000))]),
    Transform(rotation=(46.56263,-0.00000,40.06752,1.44279),translation=(-0.05112,1.65723,1.63666),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-18.43955,0.00000,-54.08176,1.46466),translation=(0.51645,1.62903,1.19913),
      children=[
      Shape(
        #  Arc 13.231 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57462,radius=0.02000))]),
    Transform(rotation=(-18.43955,0.00000,-54.08176,1.46466),translation=(0.63628,1.64252,1.15827),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-73.33763,0.00000,35.66324,2.42448),translation=(0.06773,1.13098,0.92463),
      children=[
      Shape(
        #  Arc 13.241 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.24084,radius=0.02000))]),
    Transform(rotation=(-73.33763,0.00000,35.66324,2.42448),translation=(-0.06460,0.78396,0.65251),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-9.04180,0.00000,-77.18026,1.64832),translation=(0.63195,1.56841,1.24611),
      children=[
      Shape(
        #  Arc 13.242 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.77942,radius=0.02000))]),
    Transform(rotation=(-9.04180,0.00000,-77.18026,1.64832),translation=(0.85941,1.55062,1.21947),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.38881,-0.00000,19.12769,0.87814),translation=(0.15041,1.79533,1.50827),
      children=[
      Shape(
        #  Arc 13.262 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61618,radius=0.02000))]),
    Transform(rotation=(43.38881,-0.00000,19.12769,0.87814),translation=(0.10444,1.88990,1.61254),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(51.02046,-0.00000,17.94643,1.02918),translation=(0.15631,1.76128,1.54643),
      children=[
      Shape(
        #  Arc 13.265 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63118,radius=0.02000))]),
    Transform(rotation=(51.02046,-0.00000,17.94643,1.02918),translation=(0.11207,1.84150,1.67219),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(33.76534,-0.00000,3.40353,2.17964),translation=(-0.50493,1.44527,0.25255),
      children=[
      Shape(
        #  Arc 15.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41370,radius=0.02000))]),
    Transform(rotation=(33.76534,-0.00000,3.40353,2.17964),translation=(-0.50879,1.41847,0.29079),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.06854,0.00000,-1.04702,2.39093),translation=(-0.48268,1.55795,0.08338),
      children=[
      Shape(
        #  Arc 15.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.01538,radius=0.02000))]),
    Transform(rotation=(-0.06854,0.00000,-1.04702,2.39093),translation=(-0.58635,1.66932,0.09016),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-6.11137,0.00000,42.58256,0.87949),translation=(-0.70083,1.74157,0.05316),
      children=[
      Shape(
        #  Arc 15.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55839,radius=0.02000))]),
    Transform(rotation=(-6.11137,0.00000,42.58256,0.87949),translation=(-0.79173,1.81756,0.04012),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-6.11137,0.00000,42.58256,0.87949),translation=(-0.70083,1.74157,0.05316),
      children=[
      Shape(
        #  Arc 15.212 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55839,radius=0.02000))]),
    Transform(rotation=(-6.11137,0.00000,42.58256,0.87949),translation=(-0.79173,1.81756,0.04012),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(7.58141,0.00000,-73.32124,1.85259),translation=(-0.12131,1.45687,0.12163),
      children=[
      Shape(
        #  Arc 15.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.76739,radius=0.02000))]),
    Transform(rotation=(7.58141,0.00000,-73.32124,1.85259),translation=(0.09242,1.39467,0.14373),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-6.11137,0.00000,42.58256,0.87949),translation=(-0.70083,1.74157,0.05316),
      children=[
      Shape(
        #  Arc 15.251 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55839,radius=0.02000))]),
    Transform(rotation=(-6.11137,0.00000,42.58256,0.87949),translation=(-0.79173,1.81756,0.04012),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-8.48452,0.00000,46.79851,1.51015),translation=(2.43430,-0.96161,-0.67138),
      children=[
      Shape(
        #  Arc 16.61 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.47649,radius=0.02000))]),
    Transform(rotation=(-8.48452,0.00000,46.79851,1.51015),translation=(2.35745,-0.95687,-0.68531),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-48.79839,0.00000,10.00014,1.19214),translation=(-0.08214,2.32117,-1.29051),
      children=[
      Shape(
        #  Arc 17.53 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.53610,radius=0.02000))]),
    Transform(rotation=(-48.79839,0.00000,10.00014,1.19214),translation=(-0.10229,2.36111,-1.38886),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(94.85302,0.00000,-15.00904,2.13826),translation=(0.04291,1.91603,-0.57225),
      children=[
      Shape(
        #  Arc 17.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13882,radius=0.02000))]),
    Transform(rotation=(94.85302,0.00000,-15.00904,2.13826),translation=(0.09687,1.69597,-0.23125),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(4.89140,-0.00000,3.01012,2.34536),translation=(1.69325,1.29093,1.15971),
      children=[
      Shape(
        #  Arc 21.52 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.08036,radius=0.02000))]),
    Transform(rotation=(4.89140,-0.00000,3.01012,2.34536),translation=(1.73814,1.37474,1.08678),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.47654,0.00000,-1.91499,1.19027),translation=(1.71788,1.34034,1.08287),
      children=[
      Shape(
        #  Arc 21.95 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.11471,radius=0.02000))]),
    Transform(rotation=(-10.47654,0.00000,-1.91499,1.19027),translation=(1.70074,1.30221,1.17662),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-5.49607,0.00000,-15.49159,1.74368),translation=(-0.53723,-0.63389,-0.69073),
      children=[
      Shape(
        #  Arc 24.89 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.16686,radius=0.02000))]),
    Transform(rotation=(-5.49607,0.00000,-15.49159,1.74368),translation=(-0.60832,-0.62072,-0.66551),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.41531,0.00000,38.84880,2.11264),translation=(-0.80893,-0.73721,-0.68533),
      children=[
      Shape(
        #  Arc 24.90 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.45636,radius=0.02000))]),
    Transform(rotation=(-4.41531,0.00000,38.84880,2.11264),translation=(-0.86697,-0.77237,-0.69193),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-51.93499,0.00000,7.20021,0.57844),translation=(-0.20767,1.30463,-1.34303),
      children=[
      Shape(
        #  Arc 26.54 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.95902,radius=0.02000))]),
    Transform(rotation=(-51.93499,0.00000,7.20021,0.57844),translation=(-0.23166,1.57217,-1.51606),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.54921,0.00000,9.74514,3.02796),translation=(-0.22040,0.47551,-1.08610),
      children=[
      Shape(
        #  Arc 26.117 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.86079,radius=0.02000))]),
    Transform(rotation=(-0.54921,0.00000,9.74514,3.02796),translation=(-0.25101,0.20686,-1.08783),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-71.98237,0.00000,20.42945,0.90649),translation=(-0.27382,1.19608,-1.44327),
      children=[
      Shape(
        #  Arc 26.137 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.95035,radius=0.02000))]),
    Transform(rotation=(-71.98237,0.00000,20.42945,0.90649),translation=(-0.34157,1.39039,-1.68199),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.60458,0.00000,0.78650,1.40149),translation=(0.05870,1.98808,1.74823),
      children=[
      Shape(
        #  Arc 27.45 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04739,radius=0.02000))]),
    Transform(rotation=(-4.60458,0.00000,0.78650,1.40149),translation=(0.08132,1.96511,1.88067),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(9.46464,-0.00000,72.21139,2.23112),translation=(1.16669,0.84608,-0.23302),
      children=[
      Shape(
        #  Arc 28.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.92213,radius=0.02000))]),
    Transform(rotation=(9.46464,-0.00000,72.21139,2.23112),translation=(0.93093,0.66142,-0.20212),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-30.78829,0.00000,-29.91550,1.50090),translation=(-0.90581,0.64119,1.50726),
      children=[
      Shape(
        #  Arc 29.122 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43034,radius=0.02000))]),
    Transform(rotation=(-30.78829,0.00000,-29.91550,1.50090),translation=(-0.86746,0.64504,1.46779),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-67.30043,0.00000,-60.50994,1.48603),translation=(-0.59086,0.41865,1.00306),
      children=[
      Shape(
        #  Arc 33.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.90829,radius=0.02000))]),
    Transform(rotation=(-67.30043,0.00000,-60.50994,1.48603),translation=(-0.39490,0.44356,0.78511),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.21996,0.00000,-38.47149,1.29027),translation=(1.63588,1.34396,0.75827),
      children=[
      Shape(
        #  Arc 34.51 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40403,radius=0.02000))]),
    Transform(rotation=(5.21996,0.00000,-38.47149,1.29027),translation=(1.67589,1.35559,0.76370),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(29.83163,0.00000,-28.39256,1.39392),translation=(1.58549,1.32483,0.88133),
      children=[
      Shape(
        #  Arc 34.95 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41836,radius=0.02000))]),
    Transform(rotation=(29.83163,0.00000,-28.39256,1.39392),translation=(1.61887,1.33349,0.91640),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.86086,0.00000,-35.15966,1.02692),translation=(1.61933,1.39929,0.67787),
      children=[
      Shape(
        #  Arc 34.177 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43004,radius=0.02000))]),
    Transform(rotation=(-10.86086,0.00000,-35.15966,1.02692),translation=(1.66431,1.42776,0.66397),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.21996,0.00000,-38.47149,1.29027),translation=(1.63588,1.34396,0.75827),
      children=[
      Shape(
        #  Arc 34.228 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40403,radius=0.02000))]),
    Transform(rotation=(5.21996,0.00000,-38.47149,1.29027),translation=(1.67589,1.35559,0.76370),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.24756,0.00000,-38.47022,1.29060),translation=(1.63588,1.34389,0.75841),
      children=[
      Shape(
        #  Arc 34.268 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40402,radius=0.02000))]),
    Transform(rotation=(5.24756,0.00000,-38.47022,1.29060),translation=(1.67588,1.35551,0.76387),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(34.29165,-0.00000,5.21630,1.08257),translation=(0.08085,1.89996,1.55375),
      children=[
      Shape(
        #  Arc 35.45 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.39275,radius=0.02000))]),
    Transform(rotation=(34.29165,-0.00000,5.21630,1.08257),translation=(0.07602,1.91702,1.58551),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(33.37878,-0.00000,5.50796,1.05666),translation=(0.07939,1.90339,1.54919),
      children=[
      Shape(
        #  Arc 35.78 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.38853,radius=0.02000))]),
    Transform(rotation=(33.37878,-0.00000,5.50796,1.05666),translation=(0.07453,1.92024,1.57863),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-93.19528,0.00000,-2.55573,1.87603),translation=(0.11971,1.66098,0.91632),
      children=[
      Shape(
        #  Arc 35.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.97748,radius=0.02000))]),
    Transform(rotation=(-93.19528,0.00000,-2.55573,1.87603),translation=(0.12831,1.56219,0.60289),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(34.29165,-0.00000,5.21630,1.08257),translation=(0.08085,1.89996,1.55375),
      children=[
      Shape(
        #  Arc 35.262 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.39275,radius=0.02000))]),
    Transform(rotation=(34.29165,-0.00000,5.21630,1.08257),translation=(0.07602,1.91702,1.58551),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(33.05232,-0.00000,4.67205,1.36306),translation=(2.30741,-1.40254,-2.10486),
      children=[
      Shape(
        #  Arc 36.205 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.34114,radius=0.02000))]),
    Transform(rotation=(33.05232,-0.00000,4.67205,1.36306),translation=(2.30596,-1.40036,-2.09462),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-28.89336,0.00000,-24.09631,1.61244),translation=(2.45125,-1.44556,-2.41459),
      children=[
      Shape(
        #  Arc 36.206 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.37655,radius=0.02000))]),
    Transform(rotation=(-28.89336,0.00000,-24.09631,1.61244),translation=(2.46934,-1.44673,-2.43629),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-12.00505,0.00000,34.57841,0.75093),translation=(2.14158,-1.21476,-0.32112),
      children=[
      Shape(
        #  Arc 37.175 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.53645,radius=0.02000))]),
    Transform(rotation=(-12.00505,0.00000,34.57841,0.75093),translation=(2.07182,-1.13564,-0.34534),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.30261,0.00000,26.18873,0.93628),translation=(-0.80743,1.83855,0.03499),
      children=[
      Shape(
        #  Arc 38.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.32776,radius=0.02000))]),
    Transform(rotation=(-3.30261,0.00000,26.18873,0.93628),translation=(-0.81053,1.84085,0.03460),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(40.39658,0.00000,-19.34643,1.35030),translation=(-0.52672,-0.45885,-1.30666),
      children=[
      Shape(
        #  Arc 39.173 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.45902,radius=0.02000))]),
    Transform(rotation=(40.39658,0.00000,-19.34643,1.35030),translation=(-0.49742,-0.44365,-1.24549),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(55.06101,-0.00000,36.75780,1.15552),translation=(2.55806,-1.38048,-1.55709),
      children=[
      Shape(
        #  Arc 40.113 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72353,radius=0.02000))]),
    Transform(rotation=(55.06101,-0.00000,36.75780,1.15552),translation=(2.45556,-1.29908,-1.40355),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(18.19459,0.00000,-8.33995,2.32917),translation=(2.00925,-2.60953,1.21353),
      children=[
      Shape(
        #  Arc 41.264 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27570,radius=0.02000))]),
    Transform(rotation=(18.19459,0.00000,-8.33995,2.32917),translation=(2.00255,-2.59430,1.19891),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(20.19670,0.00000,-14.35095,2.28933),translation=(-0.34542,2.47375,-1.76895),
      children=[
      Shape(
        #  Arc 42.199 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.32913,radius=0.02000))]),
    Transform(rotation=(20.19670,0.00000,-14.35095,2.28933),translation=(-0.34343,2.47074,-1.76615),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(2.95537,-0.00000,17.15688,0.59498),translation=(2.10178,-0.83404,-0.31614),
      children=[
      Shape(
        #  Arc 43.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.31061,radius=0.02000))]),
    Transform(rotation=(2.95537,-0.00000,17.15688,0.59498),translation=(2.10438,-0.83793,-0.31658),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(3.22545,0.00000,-45.42042,0.83834),translation=(-0.75997,-0.47278,-0.04736),
      children=[
      Shape(
        #  Arc 44.56 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61241,radius=0.02000))]),
    Transform(rotation=(3.22545,0.00000,-45.42042,0.83834),translation=(-0.65153,-0.37502,-0.03966),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.17600,0.00000,-43.47708,2.26480),translation=(-0.69483,1.73502,0.05215),
      children=[
      Shape(
        #  Arc 46.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57127,radius=0.02000))]),
    Transform(rotation=(6.17600,0.00000,-43.47708,2.26480),translation=(-0.59922,1.65466,0.06574),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-33.83388,0.00000,-4.45055,0.98716),translation=(-0.49970,1.43964,0.25220),
      children=[
      Shape(
        #  Arc 47.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.40895,radius=0.02000))]),
    Transform(rotation=(-33.83388,0.00000,-4.45055,0.98716),translation=(-0.49486,1.46415,0.21541),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(88.84652,0.00000,-10.34574,1.85417),translation=(-0.47022,1.19673,0.86561),
      children=[
      Shape(
        #  Arc 47.163 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.93162,radius=0.02000))]),
    Transform(rotation=(88.84652,0.00000,-10.34574,1.85417),translation=(-0.43626,1.11122,1.15725),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-33.16576,0.00000,14.34482,0.76743),translation=(-0.59368,1.51426,0.25554),
      children=[
      Shape(
        #  Arc 47.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52046,radius=0.02000))]),
    Transform(rotation=(-33.16576,0.00000,14.34482,0.76743),translation=(-0.62130,1.58639,0.19167),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(24.51810,0.00000,-23.36411,2.77030),translation=(-0.40513,0.89204,0.54396),
      children=[
      Shape(
        #  Arc 47.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.93347,radius=0.02000))]),
    Transform(rotation=(24.51810,0.00000,-23.36411,2.77030),translation=(-0.32836,0.60620,0.62453),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-40.39831,0.00000,19.42071,1.78880),translation=(-0.52746,-0.45780,-1.30664),
      children=[
      Shape(
        #  Arc 49.128 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.45911,radius=0.02000))]),
    Transform(rotation=(-40.39831,0.00000,19.42071,1.78880),translation=(-0.55688,-0.47284,-1.36784),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.00300,0.00000,-0.03742,2.50709),translation=(-0.43017,-0.40840,-1.10466),
      children=[
      Shape(
        #  Arc 49.173 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.00063,radius=0.02000))]),
    Transform(rotation=(-0.00300,0.00000,-0.03742,2.50709),translation=(-0.52452,-0.27980,-1.09709),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(2.16081,-0.00000,1.63382,2.57014),translation=(1.67003,1.24177,1.19497),
      children=[
      Shape(
        #  Arc 52.248 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.05009,radius=0.02000))]),
    Transform(rotation=(2.16081,-0.00000,1.63382,2.57014),translation=(1.71406,1.35528,1.13675),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-24.19905,0.00000,3.09226,0.70268),translation=(-0.14760,2.56429,-1.65550),
      children=[
      Shape(
        #  Arc 53.267 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.37749,radius=0.02000))]),
    Transform(rotation=(-24.19905,0.00000,3.09226,0.70268),translation=(-0.14995,2.58623,-1.67392),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(69.77907,0.00000,-24.45532,0.79515),translation=(-0.41059,0.09454,0.31766),
      children=[
      Shape(
        #  Arc 56.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.03563,radius=0.02000))]),
    Transform(rotation=(69.77907,0.00000,-24.45532,0.79515),translation=(-0.32609,0.34508,0.55875),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.02871,0.00000,17.81498,0.80174),translation=(-0.56652,1.63977,0.06789),
      children=[
      Shape(
        #  Arc 57.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25148,radius=0.02000))]),
    Transform(rotation=(-3.02871,0.00000,17.81498,0.80174),translation=(-0.54225,1.61594,0.07202),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-6.17600,0.00000,43.47708,0.87680),translation=(-0.69483,1.73502,0.05215),
      children=[
      Shape(
        #  Arc 57.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57127,radius=0.02000))]),
    Transform(rotation=(-6.17600,0.00000,43.47708,0.87680),translation=(-0.79045,1.81538,0.03857),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-18.10209,0.00000,-59.54025,1.47842),translation=(-0.17975,1.58115,-0.00748),
      children=[
      Shape(
        #  Arc 57.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.62498,radius=0.02000))]),
    Transform(rotation=(-18.10209,0.00000,-59.54025,1.47842),translation=(-0.03447,1.59521,-0.05164),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(10.28207,-0.00000,9.25986,1.87420),translation=(0.58546,-0.53903,-0.48783),
      children=[
      Shape(
        #  Arc 58.229 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.14499,radius=0.02000))]),
    Transform(rotation=(10.28207,-0.00000,9.25986,1.87420),translation=(0.64134,-0.51288,-0.54988),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-2.55970,0.00000,-75.41843,2.16179),translation=(1.00885,-0.77054,-0.55204),
      children=[
      Shape(
        #  Arc 58.235 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.90875,radius=0.02000))]),
    Transform(rotation=(-2.55970,0.00000,-75.41843,2.16179),translation=(1.25316,-0.93456,-0.56033),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-54.88573,0.00000,-0.57094,1.87784),translation=(0.63461,-0.60439,-0.81367),
      children=[
      Shape(
        #  Arc 58.253 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.57582,radius=0.02000))]),
    Transform(rotation=(-54.88573,0.00000,-0.57094,1.87784),translation=(0.63588,-0.64305,-0.93559),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(51.86952,0.00000,-21.11634,2.45830),translation=(1.55030,-1.96978,0.61368),
      children=[
      Shape(
        #  Arc 59.81 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.88703,radius=0.02000))]),
    Transform(rotation=(51.86952,0.00000,-21.11634,2.45830),translation=(1.61779,-2.18965,0.77947),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-79.07482,0.00000,90.55589,0.84578),translation=(0.99194,-1.09326,-0.04104),
      children=[
      Shape(
        #  Arc 59.229 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.60620,radius=0.02000))]),
    Transform(rotation=(-79.07482,0.00000,90.55589,0.84578),translation=(0.62937,-0.66679,-0.35765),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-27.23410,0.00000,73.25583,2.22311),translation=(0.97385,0.80056,0.12623),
      children=[
      Shape(
        #  Arc 60.232 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.98347,radius=0.02000))]),
    Transform(rotation=(-27.23410,0.00000,73.25583,2.22311),translation=(0.72675,0.59919,0.03437),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(25.29835,0.00000,-29.00585,0.69185),translation=(1.48516,1.33135,0.38890),
      children=[
      Shape(
        #  Arc 60.243 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.60330,radius=0.02000))]),
    Transform(rotation=(25.29835,0.00000,-29.00585,0.69185),translation=(1.55326,1.44043,0.44829),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-50.62573,0.00000,19.74482,1.81453),translation=(2.10159,-1.01474,-0.96693),
      children=[
      Shape(
        #  Arc 61.184 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55995,radius=0.02000))]),
    Transform(rotation=(-50.62573,0.00000,19.74482,1.81453),translation=(2.05928,-1.04369,-1.07540),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(3.63042,-0.00000,34.38520,0.80389),translation=(0.77562,1.38375,1.23044),
      children=[
      Shape(
        #  Arc 62.112 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.48019,radius=0.02000))]),
    Transform(rotation=(3.63042,-0.00000,34.38520,0.80389),translation=(0.71827,1.43933,1.23650),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-14.85559,0.00000,85.10394,1.82676),translation=(0.52203,1.10410,1.13801),
      children=[
      Shape(
        #  Arc 62.139 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89300,radius=0.02000))]),
    Transform(rotation=(-14.85559,0.00000,85.10394,1.82676),translation=(0.24899,1.03157,1.09035),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.60418,-0.00000,18.99731,1.14925),translation=(0.73245,-0.78587,-1.27612),
      children=[
      Shape(
        #  Arc 66.253 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.46172,radius=0.02000))]),
    Transform(rotation=(37.60418,-0.00000,18.99731,1.14925),translation=(0.70330,-0.75687,-1.21840),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(16.81905,-0.00000,60.04123,1.84401),translation=(1.08951,1.57548,1.07237),
      children=[
      Shape(
        #  Arc 67.208 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64754,radius=0.02000))]),
    Transform(rotation=(16.81905,-0.00000,60.04123,1.84401),translation=(0.93766,1.53129,1.11491),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-47.28900,0.00000,-24.04773,1.75566),translation=(1.50995,1.61324,0.75183),
      children=[
      Shape(
        #  Arc 67.243 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.53972,radius=0.02000))]),
    Transform(rotation=(-47.28900,0.00000,-24.04773,1.75566),translation=(1.55890,1.59305,0.65558),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.96291,-0.00000,37.58295,2.19721),translation=(0.61772,0.42498,-0.15088),
      children=[
      Shape(
        #  Arc 69.255 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.47181,radius=0.02000))]),
    Transform(rotation=(6.96291,-0.00000,37.58295,2.19721),translation=(0.55726,0.38048,-0.13968),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.88204,-0.00000,18.09006,0.50312),translation=(-0.46626,-0.05740,-0.61761),
      children=[
      Shape(
        #  Arc 70.71 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.39452,radius=0.02000))]),
    Transform(rotation=(5.88204,-0.00000,18.09006,0.50312),translation=(-0.48335,-0.02475,-0.61205),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(11.37685,0.00000,-12.56640,0.85772),translation=(-0.31298,-0.15691,-0.59013),
      children=[
      Shape(
        #  Arc 70.124 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.22412,radius=0.02000))]),
    Transform(rotation=(11.37685,0.00000,-12.56640,0.85772),translation=(-0.33986,-0.18827,-0.61447),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(40.87882,0.00000,-16.43245,0.52026),translation=(-0.47455,0.49993,-0.38380),
      children=[
      Shape(
        #  Arc 71.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.88629,radius=0.02000))]),
    Transform(rotation=(40.87882,0.00000,-16.43245,0.52026),translation=(-0.42205,0.74562,-0.25321),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-36.62649,0.00000,27.88908,1.59982),translation=(1.80792,1.21539,1.44382),
      children=[
      Shape(
        #  Arc 72.197 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.46055,radius=0.02000))]),
    Transform(rotation=(-36.62649,0.00000,27.88908,1.59982),translation=(1.76537,1.21335,1.38793),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(48.03489,0.00000,-10.65019,1.42238),translation=(1.99589,-1.06829,-0.99569),
      children=[
      Shape(
        #  Arc 74.258 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.49748,radius=0.02000))]),
    Transform(rotation=(48.03489,0.00000,-10.65019,1.42238),translation=(2.01489,-1.05517,-0.91000),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-23.35152,0.00000,-6.05367,1.88135),translation=(1.97291,-1.14378,-1.35262),
      children=[
      Shape(
        #  Arc 74.263 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.25335,radius=0.02000))]),
    Transform(rotation=(-23.35152,0.00000,-6.05367,1.88135),translation=(1.96495,-1.13360,-1.32190),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-68.00093,0.00000,-23.44772,2.05170),translation=(2.05988,-1.29272,-1.57586),
      children=[
      Shape(
        #  Arc 74.266 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.81132,radius=0.02000))]),
    Transform(rotation=(-68.00093,0.00000,-23.44772,2.05170),translation=(2.13088,-1.40636,-1.78177),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.60458,0.00000,0.78650,1.40149),translation=(0.05870,1.98808,1.74823),
      children=[
      Shape(
        #  Arc 77.262 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04739,radius=0.02000))]),
    Transform(rotation=(-4.60458,0.00000,0.78650,1.40149),translation=(0.08132,1.96511,1.88067),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-9.09120,0.00000,-75.14189,1.97851),translation=(0.92069,1.55644,0.29091),
      children=[
      Shape(
        #  Arc 79.85 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.82448,radius=0.02000))]),
    Transform(rotation=(-9.09120,0.00000,-75.14189,1.97851),translation=(1.15058,1.45643,0.26310),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-91.77186,0.00000,15.55277,0.95737),translation=(0.46722,2.04756,-0.12249),
      children=[
      Shape(
        #  Arc 79.220 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.13835,radius=0.02000))]),
    Transform(rotation=(-91.77186,0.00000,15.55277,0.95737),translation=(0.41131,2.28312,-0.45236),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(77.05626,0.00000,-24.18828,1.64549),translation=(0.66592,1.68968,0.72165),
      children=[
      Shape(
        #  Arc 79.231 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80989,radius=0.02000))]),
    Transform(rotation=(77.05626,0.00000,-24.18828,1.64549),translation=(0.73908,1.67141,0.95470),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(25.78682,0.00000,-3.68359,2.60387),translation=(1.67430,-2.53213,1.00196),
      children=[
      Shape(
        #  Arc 81.144 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.50858,radius=0.02000))]),
    Transform(rotation=(25.78682,0.00000,-3.68359,2.60387),translation=(1.68113,-2.61311,1.04977),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.59690,-0.00000,31.60014,2.29737),translation=(1.92109,1.81745,0.51099),
      children=[
      Shape(
        #  Arc 84.250 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.42935,radius=0.02000))]),
    Transform(rotation=(5.59690,-0.00000,31.60014,2.29737),translation=(1.88085,1.78113,0.51812),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.12013,0.00000,-2.40445,3.01157),translation=(1.30842,0.99524,0.19485),
      children=[
      Shape(
        #  Arc 85.162 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80227,radius=0.02000))]),
    Transform(rotation=(-10.12013,0.00000,-2.40445,3.01157),translation=(1.31565,0.75613,0.16443),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(9.99142,0.00000,-5.51093,0.40149),translation=(0.57614,1.41597,1.19864),
      children=[
      Shape(
        #  Arc 86.112 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29199,radius=0.02000))]),
    Transform(rotation=(9.99142,0.00000,-5.51093,0.40149),translation=(0.57350,1.40308,1.19385),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(0.77874,0.00000,-24.07123,0.86193),translation=(0.66894,1.38485,1.15257),
      children=[
      Shape(
        #  Arc 86.208 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.31727,radius=0.02000))]),
    Transform(rotation=(0.77874,0.00000,-24.07123,0.86193),translation=(0.66791,1.38397,1.15254),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(26.73363,0.00000,-20.37764,0.84535),translation=(-0.47541,-0.82866,-1.02960),
      children=[
      Shape(
        #  Arc 88.103 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.44927,radius=0.02000))]),
    Transform(rotation=(26.73363,0.00000,-20.37764,0.84535),translation=(-0.44609,-0.78578,-0.99114),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(3.06986,0.00000,-31.72221,1.20958),translation=(-0.30116,-0.58804,-0.70286),
      children=[
      Shape(
        #  Arc 89.252 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.34069,radius=0.02000))]),
    Transform(rotation=(3.06986,0.00000,-31.72221,1.20958),translation=(-0.29153,-0.58438,-0.70193),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-61.38329,0.00000,-70.88464,1.22435),translation=(-0.64273,0.28785,0.97347),
      children=[
      Shape(
        #  Arc 92.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.99692,radius=0.02000))]),
    Transform(rotation=(-61.38329,0.00000,-70.88464,1.22435),translation=(-0.40208,0.40278,0.76507),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-54.54170,0.00000,83.21902,1.66822),translation=(0.12778,0.50573,0.93926),
      children=[
      Shape(
        #  Arc 93.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.99974,radius=0.02000))]),
    Transform(rotation=(-54.54170,0.00000,83.21902,1.66822),translation=(-0.15513,0.47267,0.75384),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-9.06020,0.00000,61.76179,1.26815),translation=(2.32481,-0.80288,-0.25606),
      children=[
      Shape(
        #  Arc 94.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65395,radius=0.02000))]),
    Transform(rotation=(-9.06020,0.00000,61.76179,1.26815),translation=(2.16711,-0.75311,-0.27919),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.47216,0.00000,-4.54496,2.09716),translation=(1.66758,1.70754,0.63494),
      children=[
      Shape(
        #  Arc 96.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.06615,radius=0.02000))]),
    Transform(rotation=(-3.47216,0.00000,-4.54496,2.09716),translation=(1.58038,1.77131,0.70157),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(1.86289,-0.00000,11.84104,1.23177),translation=(1.58565,1.74529,0.66162),
      children=[
      Shape(
        #  Arc 96.183 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.12710,radius=0.02000))]),
    Transform(rotation=(1.86289,-0.00000,11.84104,1.23177),translation=(1.67551,1.71322,0.64748),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-41.63811,0.00000,-47.83637,1.22930),translation=(-0.65768,0.95378,1.51803),
      children=[
      Shape(
        #  Arc 97.163 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.67306,radius=0.02000))]),
    Transform(rotation=(-41.63811,0.00000,-47.83637,1.22930),translation=(-0.53221,1.01290,1.40882),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-11.15168,0.00000,-22.30375,1.87782),translation=(-0.78534,0.80155,1.67046),
      children=[
      Shape(
        #  Arc 97.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.26160,radius=0.02000))]),
    Transform(rotation=(-11.15168,0.00000,-22.30375,1.87782),translation=(-0.81024,0.81037,1.68291),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-23.43475,0.00000,-29.59559,1.52079),translation=(-1.25551,0.65200,1.82273),
      children=[
      Shape(
        #  Arc 98.240 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.37798,radius=0.02000))]),
    Transform(rotation=(-23.43475,0.00000,-29.59559,1.52079),translation=(-1.23281,0.65345,1.80475),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(7.27668,-0.00000,35.73357,2.17355),translation=(2.01000,1.71526,0.51589),
      children=[
      Shape(
        #  Arc 100.101 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.44268,radius=0.02000))]),
    Transform(rotation=(7.27668,-0.00000,35.73357,2.17355),translation=(1.96049,1.68048,0.52597),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(7.12885,-0.00000,3.62082,2.35159),translation=(1.81323,1.55016,0.58792),
      children=[
      Shape(
        #  Arc 101.177 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.11256,radius=0.02000))]),
    Transform(rotation=(7.12885,-0.00000,3.62082,2.35159),translation=(1.84659,1.62317,0.52223),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(20.84133,0.00000,-23.09680,1.11688),translation=(-0.25803,-0.60373,-0.79172),
      children=[
      Shape(
        #  Arc 103.252 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.34615,radius=0.02000))]),
    Transform(rotation=(20.84133,0.00000,-23.09680,1.11688),translation=(-0.24931,-0.59800,-0.78385),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(16.69128,-0.00000,73.36939,0.94516),translation=(2.03050,-0.02782,0.09577),
      children=[
      Shape(
        #  Arc 104.189 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.92826,radius=0.02000))]),
    Transform(rotation=(16.69128,-0.00000,73.36939,0.94516),translation=(1.79012,0.15028,0.15045),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.61433,0.00000,43.34478,1.15028),translation=(1.58138,-1.13818,-0.46707),
      children=[
      Shape(
        #  Arc 106.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.48884,radius=0.02000))]),
    Transform(rotation=(-10.61433,0.00000,43.34478,1.15028),translation=(1.50652,-1.10371,-0.48540),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.75869,0.00000,-34.66464,1.41781),translation=(-0.84714,0.71270,1.88350),
      children=[
      Shape(
        #  Arc 107.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64722,radius=0.02000))]),
    Transform(rotation=(-53.75869,0.00000,-34.66464,1.41781),translation=(-0.75952,0.73764,1.74760),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-1.12498,0.00000,96.84759,1.54497),translation=(0.61673,1.50159,0.45597),
      children=[
      Shape(
        #  Arc 108.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96886,radius=0.02000))]),
    Transform(rotation=(-1.12498,0.00000,96.84759,1.54497),translation=(0.29242,1.50997,0.45220),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-5.15314,0.00000,-49.85091,2.44818),translation=(1.35022,1.18757,0.43583),
      children=[
      Shape(
        #  Arc 108.221 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.78409,radius=0.02000))]),
    Transform(rotation=(-5.15314,0.00000,-49.85091,2.44818),translation=(1.49775,1.00911,0.42058),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-19.54177,0.00000,101.33976,1.66482),translation=(0.63919,1.56276,0.54805),
      children=[
      Shape(
        #  Arc 109.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.03665,radius=0.02000))]),
    Transform(rotation=(-19.54177,0.00000,101.33976,1.66482),translation=(0.28890,1.52912,0.48050),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(2.51725,0.00000,-38.05618,1.18478),translation=(1.33617,1.68893,0.65835),
      children=[
      Shape(
        #  Arc 109.183 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41169,radius=0.02000))]),
    Transform(rotation=(2.51725,0.00000,-38.05618,1.18478),translation=(1.37855,1.70619,0.66115),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(3.37031,0.00000,-41.95561,0.64639),translation=(1.35566,1.89035,0.66261),
      children=[
      Shape(
        #  Arc 109.247 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.69883,radius=0.02000))]),
    Transform(rotation=(3.37031,0.00000,-41.95561,0.64639),translation=(1.46938,2.04155,0.67175),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-24.23264,0.00000,4.50882,1.40998),translation=(2.07481,-1.08307,-0.57304),
      children=[
      Shape(
        #  Arc 110.165 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.24971,radius=0.02000))]),
    Transform(rotation=(-24.23264,0.00000,4.50882,1.40998),translation=(2.08115,-1.08870,-0.53893),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-82.49538,0.00000,-2.75848,2.22996),translation=(-0.12438,0.98312,0.97042),
      children=[
      Shape(
        #  Arc 111.241 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04417,radius=0.02000))]),
    Transform(rotation=(-82.49538,0.00000,-2.75848,2.22996),translation=(-0.11481,0.76136,0.68436),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(51.01085,-0.00000,30.87492,1.04446),translation=(0.44932,1.72357,1.50365),
      children=[
      Shape(
        #  Arc 112.141 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.68960,radius=0.02000))]),
    Transform(rotation=(51.01085,-0.00000,30.87492,1.04446),translation=(0.36658,1.81641,1.64035),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(74.68855,-0.00000,7.53653,1.04960),translation=(0.56602,1.76586,1.62204),
      children=[
      Shape(
        #  Arc 112.160 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.86561,radius=0.02000))]),
    Transform(rotation=(74.68855,-0.00000,7.53653,1.04960),translation=(0.54226,1.90169,1.85743),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-9.21268,0.00000,-18.56030,1.86257),translation=(0.69650,1.51924,1.20253),
      children=[
      Shape(
        #  Arc 112.208 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.21635,radius=0.02000))]),
    Transform(rotation=(-9.21268,0.00000,-18.56030,1.86257),translation=(0.65204,1.53415,1.22460),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.76903,0.00000,-41.41502,1.59987),translation=(0.81077,1.54429,1.22475),
      children=[
      Shape(
        #  Arc 112.242 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.41706,radius=0.02000))]),
    Transform(rotation=(-4.76903,0.00000,-41.41502,1.59987),translation=(0.85897,1.54288,1.21920),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(43.49582,0.00000,-16.83712,1.44697),translation=(2.45846,-1.20551,-1.06431),
      children=[
      Shape(
        #  Arc 113.261 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.47001,radius=0.02000))]),
    Transform(rotation=(43.49582,0.00000,-16.83712,1.44697),translation=(2.48533,-1.19625,-0.99490),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-32.04825,0.00000,-2.21290,1.81989),translation=(2.06946,-1.53285,-2.58119),
      children=[
      Shape(
        #  Arc 114.156 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.33148,radius=0.02000))]),
    Transform(rotation=(-32.04825,0.00000,-2.21290,1.81989),translation=(2.06984,-1.53427,-2.58674),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-32.07348,0.00000,-2.24435,1.81770),translation=(2.06962,-1.53251,-2.58132),
      children=[
      Shape(
        #  Arc 114.256 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.33157,radius=0.02000))]),
    Transform(rotation=(-32.07348,0.00000,-2.24435,1.81770),translation=(2.07001,-1.53393,-2.58692),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-55.47586,0.00000,-44.50599,1.98807),translation=(0.56433,1.81711,1.38431),
      children=[
      Shape(
        #  Arc 115.231 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.77797,radius=0.02000))]),
    Transform(rotation=(-55.47586,0.00000,-44.50599,1.98807),translation=(0.69533,1.72431,1.22102),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(13.98415,-0.00000,27.52221,1.73381),translation=(0.20419,1.94937,1.73161),
      children=[
      Shape(
        #  Arc 115.265 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.31286,radius=0.02000))]),
    Transform(rotation=(13.98415,-0.00000,27.52221,1.73381),translation=(0.20733,1.94995,1.73001),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.92213,0.00000,-23.04460,2.65736),translation=(-0.15390,-0.18083,-1.05424),
      children=[
      Shape(
        #  Arc 117.191 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51687,radius=0.02000))]),
    Transform(rotation=(6.92213,0.00000,-23.04460,2.65736),translation=(-0.11001,-0.26794,-1.04105),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(20.30259,-0.00000,22.94692,0.89387),translation=(1.72728,-0.14110,-0.11317),
      children=[
      Shape(
        #  Arc 119.136 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.39306,radius=0.02000))]),
    Transform(rotation=(20.30259,-0.00000,22.94692,0.89387),translation=(1.70596,-0.11822,-0.09430),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.89375,-0.00000,52.15750,0.63368),translation=(1.58123,0.16664,-0.03522),
      children=[
      Shape(
        #  Arc 119.162 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.06929,radius=0.02000))]),
    Transform(rotation=(35.89375,-0.00000,52.15750,0.63368),translation=(1.39849,0.46855,0.09054),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(28.97009,-0.00000,40.34491,0.62569),translation=(1.81427,-0.36171,-0.15651),
      children=[
      Shape(
        #  Arc 121.136 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.84809,radius=0.02000))]),
    Transform(rotation=(28.97009,-0.00000,40.34491,0.62569),translation=(1.68866,-0.14769,-0.06632),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(30.78829,-0.00000,29.91550,1.64069),translation=(-0.90581,0.64119,1.50726),
      children=[
      Shape(
        #  Arc 122.129 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43034,radius=0.02000))]),
    Transform(rotation=(30.78829,-0.00000,29.91550,1.64069),translation=(-0.94416,0.63733,1.54673),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(30.87100,-0.00000,30.40244,1.61796),translation=(-0.90825,0.64599,1.50768),
      children=[
      Shape(
        #  Arc 122.164 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43376,radius=0.02000))]),
    Transform(rotation=(30.87100,-0.00000,30.40244,1.61796),translation=(-0.94811,0.64331,1.54816),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-79.53766,0.00000,-64.56463,1.56381),translation=(-0.43341,0.65979,0.95563),
      children=[
      Shape(
        #  Arc 122.241 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.02447,radius=0.02000))]),
    Transform(rotation=(-79.53766,0.00000,-64.56463,1.56381),translation=(-0.21142,0.66225,0.68217),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-26.43805,0.00000,-0.66411,0.86303),translation=(-0.14215,2.45779,-1.82611),
      children=[
      Shape(
        #  Arc 123.254 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.34806,radius=0.02000))]),
    Transform(rotation=(-26.43805,0.00000,-0.66411,0.86303),translation=(-0.14188,2.46691,-1.83677),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(35.38401,-0.00000,14.22401,0.37528),translation=(-0.32127,0.40042,-0.35633),
      children=[
      Shape(
        #  Arc 124.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.04046,radius=0.02000))]),
    Transform(rotation=(35.38401,-0.00000,14.22401,0.37528),translation=(-0.37051,0.73558,-0.23382),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-38.89580,0.00000,24.47189,1.69191),translation=(-0.60470,-0.39763,-1.27770),
      children=[
      Shape(
        #  Arc 125.234 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.46293,radius=0.02000))]),
    Transform(rotation=(-38.89580,0.00000,24.47189,1.69191),translation=(-0.64248,-0.40627,-1.33774),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(36.46178,0.00000,-59.19329,1.87561),translation=(-0.16348,1.62347,0.26803),
      children=[
      Shape(
        #  Arc 126.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72882,radius=0.02000))]),
    Transform(rotation=(36.46178,0.00000,-59.19329,1.87561),translation=(0.00254,1.56212,0.37030),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-18.37105,0.00000,-57.73994,1.77085),translation=(-0.17074,1.67140,-0.00613),
      children=[
      Shape(
        #  Arc 126.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.61825,radius=0.02000))]),
    Transform(rotation=(-18.37105,0.00000,-57.73994,1.77085),translation=(-0.03147,1.64177,-0.05044),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.13108,0.00000,0.81667,0.91986),translation=(-0.65968,1.73037,0.05209),
      children=[
      Shape(
        #  Arc 127.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.01040,radius=0.02000))]),
    Transform(rotation=(-0.13108,0.00000,0.81667,0.91986),translation=(-0.53809,1.63657,0.07161),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-44.46647,0.00000,10.81441,2.49364),translation=(1.71773,0.54625,0.40155),
      children=[
      Shape(
        #  Arc 130.189 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.75821,radius=0.02000))]),
    Transform(rotation=(-44.46647,0.00000,10.81441,2.49364),translation=(1.68648,0.37155,0.27306),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(6.66954,-0.00000,32.35007,2.31254),translation=(-0.74142,-0.83830,-0.46746),
      children=[
      Shape(
        #  Arc 131.152 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.44799,radius=0.02000))]),
    Transform(rotation=(6.66954,-0.00000,32.35007,2.31254),translation=(-0.78763,-0.88154,-0.45793),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.90970,0.00000,-2.18690,0.82027),translation=(-0.56873,-0.66609,-0.52035),
      children=[
      Shape(
        #  Arc 131.190 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.06125,radius=0.02000))]),
    Transform(rotation=(-3.90970,0.00000,-2.18690,0.82027),translation=(-0.61492,-0.75432,-0.43778),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-42.49353,0.00000,7.18656,0.75643),translation=(-0.06354,2.52219,-1.24174),
      children=[
      Shape(
        #  Arc 132.176 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.62793,radius=0.02000))]),
    Transform(rotation=(-42.49353,0.00000,7.18656,0.75643),translation=(-0.08116,2.63417,-1.34593),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(93.12813,0.00000,-14.55628,2.19845),translation=(0.04517,1.95191,-0.56363),
      children=[
      Shape(
        #  Arc 132.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.16454,radius=0.02000))]),
    Transform(rotation=(93.12813,0.00000,-14.55628,2.19845),translation=(0.09796,1.70393,-0.22594),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(22.68883,-0.00000,30.01004,1.58487),translation=(-1.26704,0.67849,1.81486),
      children=[
      Shape(
        #  Arc 133.230 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.37625,radius=0.02000))]),
    Transform(rotation=(22.68883,-0.00000,30.01004,1.58487),translation=(-1.28947,0.67809,1.83182),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(31.99507,-0.00000,19.04492,1.63819),translation=(2.30255,-1.41496,-2.53256),
      children=[
      Shape(
        #  Arc 134.249 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.37319,radius=0.02000))]),
    Transform(rotation=(31.99507,-0.00000,19.04492,1.63819),translation=(2.28898,-1.41675,-2.50976),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(3.57574,-0.00000,0.03406,2.27556),translation=(-0.66523,1.71675,0.07184),
      children=[
      Shape(
        #  Arc 135.198 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.04694,radius=0.02000))]),
    Transform(rotation=(3.57574,-0.00000,0.03406,2.27556),translation=(-0.66424,1.80520,-0.03216),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-8.10199,0.00000,-81.78903,1.98781),translation=(2.02149,-0.20004,-0.05217),
      children=[
      Shape(
        #  Arc 136.138 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.89893,radius=0.02000))]),
    Transform(rotation=(-8.10199,0.00000,-81.78903,1.98781),translation=(2.28486,-0.31729,-0.07826),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(58.70160,0.00000,-18.52205,0.64937),translation=(1.70516,0.38739,0.28185),
      children=[
      Shape(
        #  Arc 136.166 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.01796,radius=0.02000))]),
    Transform(rotation=(58.70160,0.00000,-18.52205,0.64937),translation=(1.76866,0.66534,0.48309),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.17202,-0.00000,1.30757,0.43665),translation=(1.60601,0.43403,0.19920),
      children=[
      Shape(
        #  Arc 136.221 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.99767,radius=0.02000))]),
    Transform(rotation=(42.17202,-0.00000,1.30757,0.43665),translation=(1.60157,0.74108,0.34243),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(61.76666,-0.00000,65.29873,1.73041),translation=(-0.22998,0.91871,1.37257),
      children=[
      Shape(
        #  Arc 139.193 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.91041,radius=0.02000))]),
    Transform(rotation=(61.76666,-0.00000,65.29873,1.73041),translation=(-0.44172,0.87179,1.57285),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(55.09675,-0.00000,77.03318,1.80808),translation=(-0.28866,0.87654,1.33922),
      children=[
      Shape(
        #  Arc 139.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.97439,radius=0.02000))]),
    Transform(rotation=(55.09675,-0.00000,77.03318,1.80808),translation=(-0.54733,0.79963,1.52423),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(53.23952,-0.00000,74.75169,1.77761),translation=(-0.27725,0.89479,1.32993),
      children=[
      Shape(
        #  Arc 139.245 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.93771,radius=0.02000))]),
    Transform(rotation=(53.23952,-0.00000,74.75169,1.77761),translation=(-0.52346,0.83137,1.50529),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-116.17216,0.00000,-2.14449,1.08136),translation=(0.10723,1.30052,0.48287),
      children=[
      Shape(
        #  Arc 139.269 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.31648,radius=0.02000))]),
    Transform(rotation=(-116.17216,0.00000,-2.14449,1.08136),translation=(0.11535,1.53475,0.04321),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-55.11591,0.00000,-36.71184,1.45754),translation=(-0.83457,0.76085,1.87171),
      children=[
      Shape(
        #  Arc 140.245 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66650,radius=0.02000))]),
    Transform(rotation=(-55.11591,0.00000,-36.71184,1.45754),translation=(-0.73914,0.78043,1.72844),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(24.16064,-0.00000,15.75569,1.02906),translation=(2.24996,-1.67429,-2.41565),
      children=[
      Shape(
        #  Arc 143.246 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.33664,radius=0.02000))]),
    Transform(rotation=(24.16064,-0.00000,15.75569,1.02906),translation=(2.24607,-1.67000,-2.40967),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-34.44606,0.00000,-15.60488,1.51998),translation=(2.25788,-1.41788,-2.54622),
      children=[
      Shape(
        #  Arc 145.200 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.37865,radius=0.02000))]),
    Transform(rotation=(-34.44606,0.00000,-15.60488,1.51998),translation=(2.26997,-1.41639,-2.57290),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(19.04769,-0.00000,8.82514,1.57974),translation=(2.13573,-1.42844,-2.27875),
      children=[
      Shape(
        #  Arc 145.233 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.20994,radius=0.02000))]),
    Transform(rotation=(19.04769,-0.00000,8.82514,1.57974),translation=(2.15887,-1.42794,-2.32869),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(2.33875,-0.00000,1.91484,1.04853),translation=(1.69988,1.68223,0.60589),
      children=[
      Shape(
        #  Arc 149.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.03488,radius=0.02000))]),
    Transform(rotation=(2.33875,-0.00000,1.91484,1.04853),translation=(1.77816,1.61111,0.51029),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(2.08620,0.00000,-79.72425,2.05522),translation=(0.96440,-0.86275,-0.57435),
      children=[
      Shape(
        #  Arc 155.161 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.90121,radius=0.02000))]),
    Transform(rotation=(2.08620,0.00000,-79.72425,2.05522),translation=(1.22148,-0.99809,-0.56763),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(28.79952,-0.00000,0.55261,1.17037),translation=(2.17988,-1.54134,-2.05987),
      children=[
      Shape(
        #  Arc 158.266 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.31279,radius=0.02000))]),
    Transform(rotation=(28.79952,-0.00000,0.55261,1.17037),translation=(2.17995,-1.54274,-2.06319),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(50.89776,0.00000,-12.52212,1.53683),translation=(1.98965,-1.07199,-0.94869),
      children=[
      Shape(
        #  Arc 159.165 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.52446,radius=0.02000))]),
    Transform(rotation=(50.89776,0.00000,-12.52212,1.53683),translation=(2.01406,-1.06852,-0.84948),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-26.61946,0.00000,-7.61403,1.92249),translation=(1.96511,-1.13169,-1.33628),
      children=[
      Shape(
        #  Arc 159.263 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29492,radius=0.02000))]),
    Transform(rotation=(-26.61946,0.00000,-7.61403,1.92249),translation=(1.96187,-1.12737,-1.32496),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(1.52824,-0.00000,107.51485,0.96006),translation=(0.78287,0.97383,0.15189),
      children=[
      Shape(
        #  Arc 162.218 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.31253,radius=0.02000))]),
    Transform(rotation=(1.52824,-0.00000,107.51485,0.96006),translation=(0.37636,1.25842,0.15767),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(37.15633,-0.00000,13.79817,2.07776),translation=(-0.48749,0.95642,1.49562),
      children=[
      Shape(
        #  Arc 163.193 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.45338,radius=0.02000))]),
    Transform(rotation=(37.15633,-0.00000,13.79817,2.07776),translation=(-0.50778,0.92404,1.55028),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(44.71108,0.00000,-26.38654,0.70418),translation=(-0.28656,1.37207,1.53339),
      children=[
      Shape(
        #  Arc 163.223 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.80191,radius=0.02000))]),
    Transform(rotation=(44.71108,0.00000,-26.38654,0.70418),translation=(-0.20728,1.55571,1.66774),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-75.18918,0.00000,-30.79082,2.03136),translation=(-0.26454,0.86493,0.93389),
      children=[
      Shape(
        #  Arc 163.241 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.90700,radius=0.02000))]),
    Transform(rotation=(-75.18918,0.00000,-30.79082,2.03136),translation=(-0.16490,0.73448,0.69058),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(28.62919,-0.00000,23.25113,2.19914),translation=(-0.53475,0.93250,1.45298),
      children=[
      Shape(
        #  Arc 163.245 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.45589,radius=0.02000))]),
    Transform(rotation=(28.62919,-0.00000,23.25113,2.19914),translation=(-0.56940,0.89256,1.49565),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(4.35189,-0.00000,4.72760,1.19052),translation=(-1.08390,0.64861,1.68379),
      children=[
      Shape(
        #  Arc 164.240 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.06920,radius=0.02000))]),
    Transform(rotation=(4.35189,-0.00000,4.72760,1.19052),translation=(-0.99822,0.60206,1.60493),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(28.61507,0.00000,-55.43197,1.25964),translation=(2.07493,0.89309,0.71843),
      children=[
      Shape(
        #  Arc 166.185 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.65529,radius=0.02000))]),
    Transform(rotation=(28.61507,0.00000,-55.43197,1.25964),translation=(2.21674,0.94441,0.79164),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(16.04403,0.00000,-61.63782,1.60522),translation=(0.23097,-0.54972,-0.51664),
      children=[
      Shape(
        #  Arc 167.229 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.63729,radius=0.02000))]),
    Transform(rotation=(16.04403,0.00000,-61.63782,1.60522),translation=(0.38441,-0.55518,-0.47670),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-3.03041,0.00000,85.64273,1.01967),translation=(0.93644,-0.77503,-0.53529),
      children=[
      Shape(
        #  Arc 169.219 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.00590,radius=0.02000))]),
    Transform(rotation=(-3.03041,0.00000,85.64273,1.01967),translation=(0.64445,-0.59545,-0.54563),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(20.19689,0.00000,-14.35104,2.28932),translation=(-0.34542,2.47375,-1.76895),
      children=[
      Shape(
        #  Arc 170.199 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.32913,radius=0.02000))]),
    Transform(rotation=(20.19689,0.00000,-14.35104,2.28932),translation=(-0.34343,2.47074,-1.76615),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-18.17343,0.00000,8.72011,0.81922),translation=(2.01277,-2.60840,1.21339),
      children=[
      Shape(
        #  Arc 172.186 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.27590,radius=0.02000))]),
    Transform(rotation=(-18.17343,0.00000,8.72011,0.81922),translation=(2.01974,-2.62346,1.22791),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(5.21453,0.00000,-10.69353,2.28052),translation=(2.02216,-1.06977,-0.35508),
      children=[
      Shape(
        #  Arc 175.260 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.15684,radius=0.02000))]),
    Transform(rotation=(5.21453,0.00000,-10.69353,2.28052),translation=(1.96654,-1.01661,-0.38220),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-0.72867,0.00000,-0.63278,0.44507),translation=(1.65870,1.21059,1.20942),
      children=[
      Shape(
        #  Arc 178.248 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.02242,radius=0.02000))]),
    Transform(rotation=(-0.72867,0.00000,-0.63278,0.44507),translation=(1.61670,1.07629,1.25779),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-2.50960,0.00000,6.46881,1.77011),translation=(1.97052,-1.08931,-1.23261),
      children=[
      Shape(
        #  Arc 184.204 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.07079,radius=0.02000))]),
    Transform(rotation=(-2.50960,0.00000,6.46881,1.77011),translation=(2.08439,-1.06464,-1.18843),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-71.95449,0.00000,-28.11834,1.92429),translation=(2.14345,-1.22483,-1.57983),
      children=[
      Shape(
        #  Arc 184.205 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.82345,radius=0.02000))]),
    Transform(rotation=(-71.95449,0.00000,-28.11834,1.92429),translation=(2.22941,-1.31197,-1.79979),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(26.39340,0.00000,-48.25586,1.53757),translation=(2.24414,-1.07316,-1.08809),
      children=[
      Shape(
        #  Arc 184.214 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.55033,radius=0.02000))]),
    Transform(rotation=(26.39340,0.00000,-48.25586,1.53757),translation=(2.34512,-1.06933,-1.03286),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(7.67885,-0.00000,25.89215,2.47576),translation=(-0.64246,-0.91898,-0.42686),
      children=[
      Shape(
        #  Arc 187.236 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.43721,radius=0.02000))]),
    Transform(rotation=(7.67885,-0.00000,25.89215,2.47576),translation=(-0.67716,-0.96507,-0.41657),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(17.55330,-0.00000,26.04696,0.41484),translation=(-0.52262,1.24106,-0.09164),
      children=[
      Shape(
        #  Arc 188.203 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.77931,radius=0.02000))]),
    Transform(rotation=(17.55330,-0.00000,26.04696,0.41484),translation=(-0.59938,1.45123,-0.03992),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(41.81064,0.00000,-53.97257,1.02832),translation=(1.93352,0.44976,0.38828),
      children=[
      Shape(
        #  Arc 189.213 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.79717,radius=0.02000))]),
    Transform(rotation=(41.81064,0.00000,-53.97257,1.02832),translation=(2.09506,0.57293,0.51341),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-35.53756,0.00000,-41.80911,2.49908),translation=(1.87270,-0.12259,0.00153),
      children=[
      Shape(
        #  Arc 189.217 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.91574,radius=0.02000))]),
    Transform(rotation=(-35.53756,0.00000,-41.80911,2.49908),translation=(2.00870,-0.36106,-0.11406),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(46.91807,0.00000,-54.69026,1.71157),translation=(0.23477,-0.46061,-0.78504),
      children=[
      Shape(
        #  Arc 191.219 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.72778,radius=0.02000))]),
    Transform(rotation=(46.91807,0.00000,-54.69026,1.71157),translation=(0.38799,-0.48921,-0.65359),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(22.32475,-0.00000,26.18245,1.56262),translation=(1.97934,-1.55759,0.12705),
      children=[
      Shape(
        #  Arc 202.207 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.34409,radius=0.02000))]),
    Transform(rotation=(22.32475,-0.00000,26.18245,1.56262),translation=(1.97017,-1.55749,0.13487),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-64.33399,0.00000,-27.88052,2.03408),translation=(2.07758,-1.27145,-1.56682),
      children=[
      Shape(
        #  Arc 204.215 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.78377,radius=0.02000))]),
    Transform(rotation=(-64.33399,0.00000,-27.88052,2.03408),translation=(2.16006,-1.37508,-1.75716),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(42.26979,0.00000,-32.69101,2.44300),translation=(2.01188,-1.87430,0.45002),
      children=[
      Shape(
        #  Arc 207.257 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.83086,radius=0.02000))]),
    Transform(rotation=(42.26979,0.00000,-32.69101,2.44300),translation=(2.11238,-2.06990,0.57997),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-4.52955,0.00000,-5.50708,0.79907),translation=(2.17979,-1.46221,-2.34994),
      children=[
      Shape(
        #  Arc 209.249 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.09949,radius=0.02000))]),
    Transform(rotation=(-4.52955,0.00000,-5.50708,0.79907),translation=(2.11876,-1.53910,-2.29974),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(10.10542,0.00000,-30.55096,0.68133),translation=(-0.25993,-1.00229,-0.73843),
      children=[
      Shape(
        #  Arc 210.227 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.51092,radius=0.02000))]),
    Transform(rotation=(10.10542,0.00000,-30.55096,0.68133),translation=(-0.20285,-0.92815,-0.71955),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(89.31765,0.00000,-26.57120,1.32149),translation=(0.47472,0.38344,-0.45652),
      children=[
      Shape(
        #  Arc 211.232 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.96159,radius=0.02000))]),
    Transform(rotation=(89.31765,0.00000,-26.57120,1.32149),translation=(0.56336,0.46259,-0.15855),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-28.23052,0.00000,55.70558,2.03102),translation=(1.06539,1.81426,1.24808),
      children=[
      Shape(
        #  Arc 216.231 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.69703,radius=0.02000))]),
    Transform(rotation=(-28.23052,0.00000,55.70558,2.03102),translation=(0.91473,1.73053,1.17173),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.74535,0.00000,61.54018,2.00474),translation=(0.20053,-0.65777,-0.61917),
      children=[
      Shape(
        #  Arc 219.227 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.69498,radius=0.02000))]),
    Transform(rotation=(-13.74535,0.00000,61.54018,2.00474),translation=(0.03450,-0.73660,-0.65625),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-13.70692,0.00000,65.07766,1.59512),translation=(0.18284,-0.51975,-0.61898),
      children=[
      Shape(
        #  Arc 219.252 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.66525,radius=0.02000))]),
    Transform(rotation=(-13.70692,0.00000,65.07766,1.59512),translation=(0.01397,-0.52395,-0.65455),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-7.35227,0.00000,-52.47096,2.53192),translation=(0.77058,-0.89096,-0.58721),
      children=[
      Shape(
        #  Arc 219.259 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.92531,radius=0.02000))]),
    Transform(rotation=(-7.35227,0.00000,-52.47096,2.53192),translation=(0.94221,-1.13909,-0.61126),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(4.45783,0.00000,-22.12109,0.74165),translation=(-0.04402,1.80082,1.77924),
      children=[
      Shape(
        #  Arc 223.265 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.33406,radius=0.02000))]),
    Transform(rotation=(4.45783,0.00000,-22.12109,0.74165),translation=(-0.03937,1.80600,1.78018),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-65.16779,0.00000,-9.83080,1.76660),translation=(0.58831,-0.62605,-0.76226),
      children=[
      Shape(
        #  Arc 229.253 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.67189,radius=0.02000))]),
    Transform(rotation=(-65.16779,0.00000,-9.83080,1.76660),translation=(0.61406,-0.66028,-0.93291),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-10.61336,0.00000,17.77699,2.37594),translation=(0.51869,0.39438,-0.06300),
      children=[
      Shape(
        #  Arc 232.255 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29876,radius=0.02000))]),
    Transform(rotation=(-10.61336,0.00000,17.77699,2.37594),translation=(0.52501,0.40203,-0.05923),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(10.86075,-0.00000,17.77245,2.35132),translation=(-0.19945,0.56024,0.61225),
      children=[
      Shape(
        #  Arc 241.244 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.29313,radius=0.02000))]),
    Transform(rotation=(10.86075,-0.00000,17.77245,2.35132),translation=(-0.19130,0.56969,0.60727),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Anchor(description='1: 2010-01-15-ARMY.MIL',
      children=[
      Transform(translation=(-0.08656,-0.26178,-0.55101),
        children=[
        Shape(
          #  Vertex 1 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.06344,-0.26178,-0.55101),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-ARMY.MIL'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='2: 2010-01-15-BLOGS.STATE.GOV-INDEX.PHP',
      children=[
      Transform(translation=(1.28526,1.19707,0.67279),
        children=[
        Shape(
          #  Vertex 2 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.43526,1.19707,0.67279),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-BLOGS.STATE.GOV-INDEX.PHP'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='3: 2010-01-15-FEEDS.FEEDBURNER.COM-DIPNOTE',
      children=[
      Transform(translation=(-0.06623,1.98542,-1.19849),
        children=[
        Shape(
          #  Vertex 3 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.08377,1.98542,-1.19849),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-FEEDS.FEEDBURNER.COM-DIPNOTE'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='4: 2010-01-15-FLICKR.COM-PHOTOS',
      children=[
      Transform(translation=(1.84177,-2.19139,0.88362),
        children=[
        Shape(
          #  Vertex 4 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.99177,-2.19139,0.88362),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-FLICKR.COM-PHOTOS'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='5: 2010-01-15-HAITICOMFORT.BLOGSPOT.COM',
      children=[
      Transform(translation=(-0.45002,1.58509,0.09657),
        children=[
        Shape(
          #  Vertex 5 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.30002,1.58509,0.09657),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-HAITICOMFORT.BLOGSPOT.COM'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='6: 2010-01-15-HAITICOMFORT.BLOGSPOT.COM-2010',
      children=[
      Transform(translation=(-0.45002,1.58509,0.09657),
        children=[
        Shape(
          #  Vertex 6 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.30002,1.58509,0.09657),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-HAITICOMFORT.BLOGSPOT.COM-2010'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='7: 2010-01-15-HAITICOMFORT.BLOGSPOT.COM-2010_01_01_ARCHIVE',
      children=[
      Transform(translation=(-0.43939,1.57723,0.09731),
        children=[
        Shape(
          #  Vertex 7 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.28939,1.57723,0.09731),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-HAITICOMFORT.BLOGSPOT.COM-2010_01_01_ARCHIVE'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='8: 2010-01-15-HAITICOMFORT.BLOGSPOT.COM-2010_02_01_ARCHIVE',
      children=[
      Transform(translation=(-0.43939,1.57723,0.09731),
        children=[
        Shape(
          #  Vertex 8 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.28939,1.57723,0.09731),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-HAITICOMFORT.BLOGSPOT.COM-2010_02_01_ARCHIVE'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='9: 2010-01-15-HAITICOMFORT.BLOGSPOT.COM-SEARCH',
      children=[
      Transform(translation=(-0.43939,1.57723,0.09731),
        children=[
        Shape(
          #  Vertex 9 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.28939,1.57723,0.09731),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-HAITICOMFORT.BLOGSPOT.COM-SEARCH'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='10: 2010-01-15-MEDICALTEAMS.ORG-SF',
      children=[
      Transform(translation=(-0.60672,0.78015,1.28974),
        children=[
        Shape(
          #  Vertex 10 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.45672,0.78015,1.28974),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-MEDICALTEAMS.ORG-SF'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='11: 2010-01-15-SOUTHCOM.MIL-APPSSC',
      children=[
      Transform(translation=(1.71154,-0.72124,-0.41768),
        children=[
        Shape(
          #  Vertex 11 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.86154,-0.72124,-0.41768),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-SOUTHCOM.MIL-APPSSC'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='12: 2010-01-15-TWITTER.COM-USAID_HAITI',
      children=[
      Transform(translation=(2.01583,-1.31172,-1.88716),
        children=[
        Shape(
          #  Vertex 12 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.16583,-1.31172,-1.88716),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-TWITTER.COM-USAID_HAITI'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='13: 2010-01-15-USAID.GOV-PRESS',
      children=[
      Transform(translation=(0.24605,1.59859,1.29132),
        children=[
        Shape(
          #  Vertex 13 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.39605,1.59859,1.29132),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-USAID.GOV-PRESS'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='14: Haiti/2010-01-15/Association_prob_NONE_Haiti_Cat5.txt.file.2010-01-15.simple',
      children=[
      Transform(translation=(-2.74216,-0.78734,2.74168),
        children=[
        Shape(
          #  Vertex 14 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.59216,-0.78734,2.74168),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['Haiti/2010-01-15/Association_prob_NONE_Haiti_Cat5.txt.file.2010-01-15.simple'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='15: aboard',
      children=[
      Transform(translation=(-0.48792,1.56357,0.08372),
        children=[
        Shape(
          #  Vertex 15 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.33792,1.56357,0.08372),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['aboard'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='16: access',
      children=[
      Transform(translation=(2.66830,-0.97605,-0.62896),
        children=[
        Shape(
          #  Vertex 16 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.81830,-0.97605,-0.62896),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['access'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='17: actively',
      children=[
      Transform(translation=(-0.03213,2.22208,-1.04652),
        children=[
        Shape(
          #  Vertex 17 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.11787,2.22208,-1.04652),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['actively'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='18: adoption',
      children=[
      Transform(translation=(-0.27946,2.34824,-2.16089),
        children=[
        Shape(
          #  Vertex 18 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.12946,2.34824,-2.16089),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['adoption'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='19: adoptions',
      children=[
      Transform(translation=(-0.60823,2.53538,-1.86885),
        children=[
        Shape(
          #  Vertex 19 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.45823,2.53538,-1.86885),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['adoptions'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='20: adoptive',
      children=[
      Transform(translation=(-0.58145,2.41612,-1.99364),
        children=[
        Shape(
          #  Vertex 20 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.43145,2.41612,-1.99364),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['adoptive'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='21: africa',
      children=[
      Transform(translation=(1.70830,1.31904,1.13525),
        children=[
        Shape(
          #  Vertex 21 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.85830,1.31904,1.13525),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['africa'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='22: aftermath',
      children=[
      Transform(translation=(1.65620,1.15105,1.21322),
        children=[
        Shape(
          #  Vertex 22 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.80620,1.15105,1.21322),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['aftermath'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='23: aid',
      children=[
      Transform(translation=(-1.21091,-0.59614,-0.77452),
        children=[
        Shape(
          #  Vertex 23 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.06091,-0.59614,-0.77452),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['aid'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='24: airborne',
      children=[
      Transform(translation=(-0.61469,-0.61954,-0.66325),
        children=[
        Shape(
          #  Vertex 24 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.46469,-0.61954,-0.66325),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['airborne'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='25: alert',
      children=[
      Transform(translation=(-0.27946,2.34824,-2.16089),
        children=[
        Shape(
          #  Vertex 25 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.12946,2.34824,-2.16089),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['alert'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='26: american',
      children=[
      Transform(translation=(-0.17167,0.90313,-1.08336),
        children=[
        Shape(
          #  Vertex 26 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.02167,0.90313,-1.08336),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['american'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='27: americans',
      children=[
      Transform(translation=(0.06263,1.98409,1.77126),
        children=[
        Shape(
          #  Vertex 27 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.21263,1.98409,1.77126),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['americans'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='28: americas',
      children=[
      Transform(translation=(1.52775,1.12888,-0.28035),
        children=[
        Shape(
          #  Vertex 28 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.67775,1.12888,-0.28035),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['americas'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='29: amount',
      children=[
      Transform(translation=(-1.05539,0.62616,1.66121),
        children=[
        Shape(
          #  Vertex 29 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.90539,0.62616,1.66121),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['amount'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='30: amphibious',
      children=[
      Transform(translation=(2.10916,-2.54247,1.55273),
        children=[
        Shape(
          #  Vertex 30 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.25916,-2.54247,1.55273),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['amphibious'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='31: announced',
      children=[
      Transform(translation=(2.01326,1.96792,1.06507),
        children=[
        Shape(
          #  Vertex 31 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.16326,1.96792,1.06507),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['announced'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='32: arrival',
      children=[
      Transform(translation=(0.01169,2.18041,2.15440),
        children=[
        Shape(
          #  Vertex 32 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.16169,2.18041,2.15440),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['arrival'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='33: arrived',
      children=[
      Transform(translation=(-0.89341,0.38020,1.33956),
        children=[
        Shape(
          #  Vertex 33 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.74341,0.38020,1.33956),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['arrived'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='34: asia',
      children=[
      Transform(translation=(1.44353,1.28803,0.73217),
        children=[
        Shape(
          #  Vertex 34 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.59353,1.28803,0.73217),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['asia'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='35: assistance',
      children=[
      Transform(translation=(0.10693,1.80785,1.38229),
        children=[
        Shape(
          #  Vertex 35 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.25693,1.80785,1.38229),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['assistance'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='36: assisted',
      children=[
      Transform(translation=(2.33077,-1.43772,-2.27013),
        children=[
        Shape(
          #  Vertex 36 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.48077,-1.43772,-2.27013),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['assisted'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='37: audio',
      children=[
      Transform(translation=(2.31447,-1.41084,-0.26110),
        children=[
        Shape(
          #  Vertex 37 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.46447,-1.41084,-0.26110),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['audio'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='38: baby',
      children=[
      Transform(translation=(-0.67649,1.74140,0.05150),
        children=[
        Shape(
          #  Vertex 38 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.52649,1.74140,0.05150),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['baby'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='39: bases',
      children=[
      Transform(translation=(-0.62345,-0.50905,-1.50864),
        children=[
        Shape(
          #  Vertex 39 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.47345,-0.50905,-1.50864),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['bases'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='40: bio',
      children=[
      Transform(translation=(2.74185,-1.52643,-1.83240),
        children=[
        Shape(
          #  Vertex 40 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.89185,-1.52643,-1.83240),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['bio'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='41: boy',
      children=[
      Transform(translation=(1.96755,-2.51473,1.12255),
        children=[
        Shape(
          #  Vertex 41 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.11755,-2.51473,1.12255),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['boy'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='42: br',
      children=[
      Transform(translation=(-0.41717,2.58208,-1.86994),
        children=[
        Shape(
          #  Vertex 42 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.26717,2.58208,-1.86994),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['br'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='43: briefing',
      children=[
      Transform(translation=(2.18757,-0.96266,-0.33091),
        children=[
        Shape(
          #  Vertex 43 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.33757,-0.96266,-0.33091),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['briefing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='44: brigade',
      children=[
      Transform(translation=(-0.98707,-0.67754,-0.06349),
        children=[
        Shape(
          #  Vertex 44 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.83707,-0.67754,-0.06349),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['brigade'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='45: bringing',
      children=[
      Transform(translation=(0.05477,1.99207,1.72521),
        children=[
        Shape(
          #  Vertex 45 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.20477,1.99207,1.72521),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['bringing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='46: brooklyn',
      children=[
      Transform(translation=(-0.91222,1.91772,0.02127),
        children=[
        Shape(
          #  Vertex 46 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.76222,1.91772,0.02127),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['brooklyn'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='47: care',
      children=[
      Transform(translation=(-0.52195,1.32697,0.42137),
        children=[
        Shape(
          #  Vertex 47 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.37195,1.32697,0.42137),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['care'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='48: carl',
      children=[
      Transform(translation=(0.01169,2.18041,2.15440),
        children=[
        Shape(
          #  Vertex 48 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.16169,2.18041,2.15440),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['carl'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='49: carry',
      children=[
      Transform(translation=(-0.43036,-0.40815,-1.10465),
        children=[
        Shape(
          #  Vertex 49 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.28036,-0.40815,-1.10465),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['carry'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='50: center',
      children=[
      Transform(translation=(2.55152,-1.29880,-0.17138),
        children=[
        Shape(
          #  Vertex 50 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.70152,-1.29880,-0.17138),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['center'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='51: central',
      children=[
      Transform(translation=(1.82824,1.39989,0.78437),
        children=[
        Shape(
          #  Vertex 51 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.97824,1.39989,0.78437),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['central'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='52: channels',
      children=[
      Transform(translation=(1.67820,1.26283,1.18417),
        children=[
        Shape(
          #  Vertex 52 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.82820,1.26283,1.18417),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['channels'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='53: children',
      children=[
      Transform(translation=(-0.13214,2.42026,-1.53450),
        children=[
        Shape(
          #  Vertex 53 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.01786,2.42026,-1.53450),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['children'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='54: citizens',
      children=[
      Transform(translation=(-0.24367,1.70614,-1.60271),
        children=[
        Shape(
          #  Vertex 54 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.09367,1.70614,-1.60271),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['citizens'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='55: city',
      children=[
      Transform(translation=(-1.16913,-0.47759,-1.01404),
        children=[
        Shape(
          #  Vertex 55 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.01913,-0.47759,-1.01404),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['city'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='56: combat',
      children=[
      Transform(translation=(-0.53286,-0.26802,-0.03124),
        children=[
        Shape(
          #  Vertex 56 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.38286,-0.26802,-0.03124),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['combat'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='57: comfort',
      children=[
      Transform(translation=(-0.47745,1.55232,0.08303),
        children=[
        Shape(
          #  Vertex 57 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.32745,1.55232,0.08303),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['comfort'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='58: command',
      children=[
      Transform(translation=(0.63176,-0.51737,-0.53924),
        children=[
        Shape(
          #  Vertex 58 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.78176,-0.51737,-0.53924),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['command'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='59: commander',
      children=[
      Transform(translation=(1.44472,-1.62584,0.35433),
        children=[
        Shape(
          #  Vertex 59 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.59472,-1.62584,0.35433),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['commander'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='60: committed',
      children=[
      Transform(translation=(1.34013,1.09906,0.26240),
        children=[
        Shape(
          #  Vertex 60 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.49013,1.09906,0.26240),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['committed'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='61: common',
      children=[
      Transform(translation=(2.20031,-0.94717,-0.71380),
        children=[
        Shape(
          #  Vertex 61 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.35031,-0.94717,-0.71380),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['common'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='62: community',
      children=[
      Transform(translation=(0.94755,1.21715,1.21229),
        children=[
        Shape(
          #  Vertex 62 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.09755,1.21715,1.21229),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['community'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='63: complete',
      children=[
      Transform(translation=(-0.95487,1.94376,0.02212),
        children=[
        Shape(
          #  Vertex 63 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.80487,1.94376,0.02212),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['complete'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='64: completed',
      children=[
      Transform(translation=(0.00984,2.49166,-2.09411),
        children=[
        Shape(
          #  Vertex 64 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.15984,2.49166,-2.09411),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['completed'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='65: concern',
      children=[
      Transform(translation=(0.03964,2.54758,-2.04680),
        children=[
        Shape(
          #  Vertex 65 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.18964,2.54758,-2.04680),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['concern'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='66: contact',
      children=[
      Transform(translation=(0.82744,-0.88033,-1.46414),
        children=[
        Shape(
          #  Vertex 66 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.97744,-0.88033,-1.46414),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['contact'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='67: coordinated',
      children=[
      Transform(translation=(1.38971,1.66285,0.98828),
        children=[
        Shape(
          #  Vertex 67 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.53971,1.66285,0.98828),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['coordinated'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='68: corps',
      children=[
      Transform(translation=(-1.00825,-0.38766,-1.30661),
        children=[
        Shape(
          #  Vertex 68 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.85825,-0.38766,-1.30661),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['corps'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='69: countries',
      children=[
      Transform(translation=(0.80563,0.56328,-0.18570),
        children=[
        Shape(
          #  Vertex 69 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.95563,0.56328,-0.18570),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['countries'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='70: courtesy',
      children=[
      Transform(translation=(-0.37581,-0.23021,-0.64702),
        children=[
        Shape(
          #  Vertex 70 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.22581,-0.23021,-0.64702),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['courtesy'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='71: credit',
      children=[
      Transform(translation=(-0.55671,0.11542,-0.58820),
        children=[
        Shape(
          #  Vertex 71 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.40671,0.11542,-0.58820),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['credit'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='72: crisis',
      children=[
      Transform(translation=(1.94737,1.22208,1.62695),
        children=[
        Shape(
          #  Vertex 72 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.09737,1.22208,1.62695),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['crisis'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='73: damaged',
      children=[
      Transform(translation=(-0.62952,-0.48240,-1.58236),
        children=[
        Shape(
          #  Vertex 73 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.47952,-0.48240,-1.58236),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['damaged'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='74: dc',
      children=[
      Transform(translation=(1.94264,-1.10507,-1.23586),
        children=[
        Shape(
          #  Vertex 74 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.09264,-1.10507,-1.23586),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dc'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='75: dead',
      children=[
      Transform(translation=(-1.13739,-0.45244,-1.09203),
        children=[
        Shape(
          #  Vertex 75 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.98739,-0.45244,-1.09203),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dead'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='76: deep',
      children=[
      Transform(translation=(0.03964,2.54758,-2.04680),
        children=[
        Shape(
          #  Vertex 76 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.18964,2.54758,-2.04680),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['deep'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='77: deliver',
      children=[
      Transform(translation=(0.06263,1.98409,1.77126),
        children=[
        Shape(
          #  Vertex 77 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.21263,1.98409,1.77126),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['deliver'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='78: delivering',
      children=[
      Transform(translation=(0.05185,1.99892,1.71608),
        children=[
        Shape(
          #  Vertex 78 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.20185,1.99892,1.71608),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['delivering'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='79: department',
      children=[
      Transform(translation=(0.54498,1.71990,0.33636),
        children=[
        Shape(
          #  Vertex 79 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.69498,1.71990,0.33636),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['department'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='80: deployed',
      children=[
      Transform(translation=(-1.00825,-0.38766,-1.30661),
        children=[
        Shape(
          #  Vertex 80 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.85825,-0.38766,-1.30661),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['deployed'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='81: deputy',
      children=[
      Transform(translation=(1.65588,-2.31373,0.87303),
        children=[
        Shape(
          #  Vertex 81 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.80588,-2.31373,0.87303),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['deputy'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='82: devastating',
      children=[
      Transform(translation=(1.65620,1.15105,1.21322),
        children=[
        Shape(
          #  Vertex 82 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.80620,1.15105,1.21322),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['devastating'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='83: diamond',
      children=[
      Transform(translation=(-1.49610,0.76810,1.89803),
        children=[
        Shape(
          #  Vertex 83 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.34610,0.76810,1.89803),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['diamond'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='84: diary',
      children=[
      Transform(translation=(2.07909,1.96007,0.48300),
        children=[
        Shape(
          #  Vertex 84 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.22909,1.96007,0.48300),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['diary'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='85: director',
      children=[
      Transform(translation=(1.29640,1.39299,0.24545),
        children=[
        Shape(
          #  Vertex 85 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.44640,1.39299,0.24545),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['director'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='86: disaster',
      children=[
      Transform(translation=(0.54859,1.28159,1.14868),
        children=[
        Shape(
          #  Vertex 86 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.69859,1.28159,1.14868),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['disaster'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='87: disclaimer',
      children=[
      Transform(translation=(2.74216,-1.02898,-0.33887),
        children=[
        Shape(
          #  Vertex 87 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.89216,-1.02898,-0.33887),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['disclaimer'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='88: dispersed',
      children=[
      Transform(translation=(-0.57729,-0.97770,-1.16326),
        children=[
        Shape(
          #  Vertex 88 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.42729,-0.97770,-1.16326),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dispersed'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='89: division',
      children=[
      Transform(translation=(-0.45977,-0.64824,-0.71821),
        children=[
        Shape(
          #  Vertex 89 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.30977,-0.64824,-0.71821),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['division'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='90: divisions',
      children=[
      Transform(translation=(-1.00318,-0.85489,-0.70741),
        children=[
        Shape(
          #  Vertex 90 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.85318,-0.85489,-0.70741),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['divisions'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='91: dock',
      children=[
      Transform(translation=(2.10916,-2.54247,1.55273),
        children=[
        Shape(
          #  Vertex 91 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.25916,-2.54247,1.55273),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dock'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='92: doctors',
      children=[
      Transform(translation=(-0.99716,0.11859,1.28039),
        children=[
        Shape(
          #  Vertex 92 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.84716,0.11859,1.28039),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['doctors'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='93: dominates',
      children=[
      Transform(translation=(0.54388,0.55435,1.21197),
        children=[
        Shape(
          #  Vertex 93 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.69388,0.55435,1.21197),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dominates'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='94: douglas',
      children=[
      Transform(translation=(2.63362,-0.90033,-0.21076),
        children=[
        Shape(
          #  Vertex 94 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.78362,-0.90033,-0.21076),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['douglas'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='95: east',
      children=[
      Transform(translation=(1.72745,1.36164,1.03049),
        children=[
        Shape(
          #  Vertex 95 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.87745,1.36164,1.03049),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['east'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='96: embed',
      children=[
      Transform(translation=(1.64486,1.72416,0.65230),
        children=[
        Shape(
          #  Vertex 96 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.79486,1.72416,0.65230),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['embed'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='97: emergency',
      children=[
      Transform(translation=(-0.89686,0.84108,1.72622),
        children=[
        Shape(
          #  Vertex 97 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.74686,0.84108,1.72622),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['emergency'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='98: entire',
      children=[
      Transform(translation=(-1.40349,0.64256,1.93990),
        children=[
        Shape(
          #  Vertex 98 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.25349,0.64256,1.93990),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['entire'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='99: esther',
      children=[
      Transform(translation=(-0.93837,1.93569,0.01848),
        children=[
        Shape(
          #  Vertex 99 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.78837,1.93569,0.01848),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['esther'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='100: eurasia',
      children=[
      Transform(translation=(2.18867,1.84074,0.47951),
        children=[
        Shape(
          #  Vertex 100 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.33867,1.84074,0.47951),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['eurasia'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='101: europe',
      children=[
      Transform(translation=(1.83133,1.58978,0.55227),
        children=[
        Shape(
          #  Vertex 101 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.98133,1.58978,0.55227),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['europe'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='102: expand',
      children=[
      Transform(translation=(0.01169,2.18041,2.15440),
        children=[
        Shape(
          #  Vertex 102 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.16169,2.18041,2.15440),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['expand'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='103: expected',
      children=[
      Transform(translation=(-0.37352,-0.67962,-0.89593),
        children=[
        Shape(
          #  Vertex 103 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.22352,-0.67962,-0.89593),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['expected'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='104: external',
      children=[
      Transform(translation=(2.39735,-0.29962,0.01231),
        children=[
        Shape(
          #  Vertex 104 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.54735,-0.29962,0.01231),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['external'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='105: family',
      children=[
      Transform(translation=(-1.47007,0.72296,1.93277),
        children=[
        Shape(
          #  Vertex 105 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.32007,0.72296,1.93277),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['family'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='106: federal',
      children=[
      Transform(translation=(1.79810,-1.23796,-0.41400),
        children=[
        Shape(
          #  Vertex 106 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.94810,-1.23796,-0.41400),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['federal'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='107: financial',
      children=[
      Transform(translation=(-1.02047,0.66339,2.15229),
        children=[
        Shape(
          #  Vertex 107 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.87047,0.66339,2.15229),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['financial'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='108: find',
      children=[
      Transform(translation=(1.10096,1.48909,0.46159),
        children=[
        Shape(
          #  Vertex 108 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.25096,1.48909,0.46159),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['find'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='109: finder',
      children=[
      Transform(translation=(1.14589,1.61142,0.64576),
        children=[
        Shape(
          #  Vertex 109 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.29589,1.61142,0.64576),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['finder'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='110: florida',
      children=[
      Transform(translation=(2.09735,-1.10307,-0.45188),
        children=[
        Shape(
          #  Vertex 110 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.24735,-1.10307,-0.45188),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['florida'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='111: flowing',
      children=[
      Transform(translation=(-0.13817,1.30287,1.38290),
        children=[
        Shape(
          #  Vertex 111 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.01183,1.30287,1.38290),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['flowing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='112: focused',
      children=[
      Transform(translation=(0.60370,1.55036,1.24860),
        children=[
        Shape(
          #  Vertex 112 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.75370,1.55036,1.24860),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['focused'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='113: follow',
      children=[
      Transform(translation=(2.37427,-1.23453,-1.28179),
        children=[
        Shape(
          #  Vertex 113 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.52427,-1.23453,-1.28179),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['follow'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='114: followers',
      children=[
      Transform(translation=(2.05840,-1.49199,-2.42095),
        children=[
        Shape(
          #  Vertex 114 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.20840,-1.49199,-2.42095),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['followers'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='115: food',
      children=[
      Transform(translation=(0.34180,1.97475,1.66169),
        children=[
        Shape(
          #  Vertex 115 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.49180,1.97475,1.66169),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['food'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='116: footer',
      children=[
      Transform(translation=(2.04769,-1.84768,-2.60502),
        children=[
        Shape(
          #  Vertex 116 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.19769,-1.84768,-2.60502),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['footer'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='117: forces',
      children=[
      Transform(translation=(-0.26912,0.04790,-1.08885),
        children=[
        Shape(
          #  Vertex 117 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.11912,0.04790,-1.08885),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['forces'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='118: fort',
      children=[
      Transform(translation=(2.24584,-2.53630,1.47351),
        children=[
        Shape(
          #  Vertex 118 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.39584,-2.53630,1.47351),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['fort'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='119: freedom',
      children=[
      Transform(translation=(1.84202,-0.26421,-0.21469),
        children=[
        Shape(
          #  Vertex 119 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.99202,-0.26421,-0.21469),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['freedom'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='120: games',
      children=[
      Transform(translation=(2.31192,1.74532,0.71678),
        children=[
        Shape(
          #  Vertex 120 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.46192,1.74532,0.71678),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['games'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='121: general',
      children=[
      Transform(translation=(2.01600,-0.70542,-0.30136),
        children=[
        Shape(
          #  Vertex 121 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.16600,-0.70542,-0.30136),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['general'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='122: gift',
      children=[
      Transform(translation=(-0.75623,0.65621,1.35332),
        children=[
        Shape(
          #  Vertex 122 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.60623,0.65621,1.35332),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['gift'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='123: government',
      children=[
      Transform(translation=(-0.14547,2.34465,-1.69392),
        children=[
        Shape(
          #  Vertex 123 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.00453,2.34465,-1.69392),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['government'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='124: graphic',
      children=[
      Transform(translation=(-0.25015,-0.08360,-0.53325),
        children=[
        Shape(
          #  Vertex 124 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.10015,-0.08360,-0.53325),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['graphic'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='125: haitians',
      children=[
      Transform(translation=(-0.48234,-0.36967,-1.08322),
        children=[
        Shape(
          #  Vertex 125 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.33234,-0.36967,-1.08322),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['haitians'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='126: hard',
      children=[
      Transform(translation=(-0.45944,1.73283,0.08572),
        children=[
        Shape(
          #  Vertex 126 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.30944,1.73283,0.08572),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hard'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='127: heading',
      children=[
      Transform(translation=(-0.65560,1.72722,0.05275),
        children=[
        Shape(
          #  Vertex 127 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.50560,1.72722,0.05275),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['heading'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='128: helicopters',
      children=[
      Transform(translation=(-0.62457,-0.50745,-1.50863),
        children=[
        Shape(
          #  Vertex 128 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.47457,-0.50745,-1.50863),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['helicopters'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='129: helps',
      children=[
      Transform(translation=(-1.05539,0.62616,1.66121),
        children=[
        Shape(
          #  Vertex 129 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.90539,0.62616,1.66121),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['helps'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='130: hemisphere',
      children=[
      Transform(translation=(1.77180,0.84852,0.62389),
        children=[
        Shape(
          #  Vertex 130 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.92180,0.84852,0.62389),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hemisphere'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='131: house',
      children=[
      Transform(translation=(-0.57967,-0.68698,-0.50080),
        children=[
        Shape(
          #  Vertex 131 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.42967,-0.68698,-0.50080),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['house'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='132: identify',
      children=[
      Transform(translation=(-0.02761,2.29384,-1.02927),
        children=[
        Shape(
          #  Vertex 132 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.12239,2.29384,-1.02927),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['identify'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='133: immediately',
      children=[
      Transform(translation=(-1.11699,0.68113,1.70141),
        children=[
        Shape(
          #  Vertex 133 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.96699,0.68113,1.70141),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['immediately'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='134: individuals',
      children=[
      Transform(translation=(2.39777,-1.40239,-2.69254),
        children=[
        Shape(
          #  Vertex 134 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.54777,-1.40239,-2.69254),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['individuals'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='135: infants',
      children=[
      Transform(translation=(-0.66506,1.73196,0.05396),
        children=[
        Shape(
          #  Vertex 135 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.51506,1.73196,0.05396),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['infants'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='136: information',
      children=[
      Transform(translation=(1.61255,-0.01800,-0.01166),
        children=[
        Shape(
          #  Vertex 136 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.76255,-0.01800,-0.01166),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['information'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='137: inquiries',
      children=[
      Transform(translation=(-0.37597,1.48903,-1.80318),
        children=[
        Shape(
          #  Vertex 137 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.22597,1.48903,-1.80318),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['inquiries'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='138: internal',
      children=[
      Transform(translation=(2.43044,-0.38209,-0.09268),
        children=[
        Shape(
          #  Vertex 138 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.58044,-0.38209,-0.09268),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['internal'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='139: international',
      children=[
      Transform(translation=(0.09651,0.99106,1.06373),
        children=[
        Shape(
          #  Vertex 139 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.24651,0.99106,1.06373),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['international'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='140: internationals',
      children=[
      Transform(translation=(-1.01812,0.72319,2.14729),
        children=[
        Shape(
          #  Vertex 140 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.86812,0.72319,2.14729),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['internationals'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='141: island',
      children=[
      Transform(translation=(0.29495,1.89679,1.75870),
        children=[
        Shape(
          #  Vertex 141 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.44495,1.89679,1.75870),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['island'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='142: issues',
      children=[
      Transform(translation=(2.28647,1.48235,1.21404),
        children=[
        Shape(
          #  Vertex 142 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.43647,1.48235,1.21404),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['issues'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='143: jobs',
      children=[
      Transform(translation=(2.32874,-1.76108,-2.53645),
        children=[
        Shape(
          #  Vertex 143 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.47874,-1.76108,-2.53645),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['jobs'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='144: keen',
      children=[
      Transform(translation=(1.69272,-2.75053,1.13089),
        children=[
        Shape(
          #  Vertex 144 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.84272,-2.75053,1.13089),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['keen'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='145: kinds',
      children=[
      Transform(translation=(2.17986,-1.42750,-2.37399),
        children=[
        Shape(
          #  Vertex 145 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.32986,-1.42750,-2.37399),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['kinds'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='146: king',
      children=[
      Transform(translation=(-1.25609,0.49936,2.11340),
        children=[
        Shape(
          #  Vertex 146 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.10609,0.49936,2.11340),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['king'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='147: knowing',
      children=[
      Transform(translation=(-0.78370,-1.01332,-1.02519),
        children=[
        Shape(
          #  Vertex 147 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.63370,-1.01332,-1.02519),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['knowing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='148: landing',
      children=[
      Transform(translation=(1.78846,-2.65879,1.51985),
        children=[
        Shape(
          #  Vertex 148 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.93846,-2.65879,1.51985),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['landing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='149: largest',
      children=[
      Transform(translation=(1.70946,1.67353,0.59419),
        children=[
        Shape(
          #  Vertex 149 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.85946,1.67353,0.59419),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['largest'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='150: launch',
      children=[
      Transform(translation=(2.01326,1.96792,1.06507),
        children=[
        Shape(
          #  Vertex 150 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.16326,1.96792,1.06507),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['launch'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='151: learning',
      children=[
      Transform(translation=(2.55152,-1.29880,-0.17138),
        children=[
        Shape(
          #  Vertex 151 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.70152,-1.29880,-0.17138),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['learning'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='152: leveled',
      children=[
      Transform(translation=(-0.90317,-0.98963,-0.43411),
        children=[
        Shape(
          #  Vertex 152 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.75317,-0.98963,-0.43411),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['leveled'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='153: life',
      children=[
      Transform(translation=(-0.91374,1.91957,0.02261),
        children=[
        Shape(
          #  Vertex 153 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.76374,1.91957,0.02261),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['life'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='154: link',
      children=[
      Transform(translation=(2.74216,-1.02898,-0.33887),
        children=[
        Shape(
          #  Vertex 154 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.89216,-1.02898,-0.33887),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['link'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='155: links',
      children=[
      Transform(translation=(0.56578,-0.65291,-0.58478),
        children=[
        Shape(
          #  Vertex 155 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.71578,-0.65291,-0.58478),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['links'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='156: listed',
      children=[
      Transform(translation=(2.08053,-1.57371,-2.74143),
        children=[
        Shape(
          #  Vertex 156 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.23053,-1.57371,-2.74143),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['listed'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='157: living',
      children=[
      Transform(translation=(-0.62921,-0.81003,-1.40237),
        children=[
        Shape(
          #  Vertex 157 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.47921,-0.81003,-1.40237),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['living'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='158: local',
      children=[
      Transform(translation=(2.18265,-1.60230,-2.20386),
        children=[
        Shape(
          #  Vertex 158 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.33265,-1.60230,-2.20386),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['local'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='159: location',
      children=[
      Transform(translation=(1.92704,-1.08089,-1.20318),
        children=[
        Shape(
          #  Vertex 159 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.07704,-1.08089,-1.20318),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['location'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='160: longer',
      children=[
      Transform(translation=(0.52833,1.98136,1.99548),
        children=[
        Shape(
          #  Vertex 160 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.67833,1.98136,1.99548),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['longer'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='161: map',
      children=[
      Transform(translation=(1.36302,-1.07260,-0.56392),
        children=[
        Shape(
          #  Vertex 161 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.51302,-1.07260,-0.56392),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['map'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='162: media',
      children=[
      Transform(translation=(1.32044,0.59748,0.14425),
        children=[
        Shape(
          #  Vertex 162 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.47044,0.59748,0.14425),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['media'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='163: medical',
      children=[
      Transform(translation=(-0.41849,1.06649,1.30984),
        children=[
        Shape(
          #  Vertex 163 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.26849,1.06649,1.30984),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['medical'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='164: medicines',
      children=[
      Transform(translation=(-1.06026,0.63576,1.66203),
        children=[
        Shape(
          #  Vertex 164 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.91026,0.63576,1.66203),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['medicines'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='165: miami',
      children=[
      Transform(translation=(2.05226,-1.06308,-0.69420),
        children=[
        Shape(
          #  Vertex 165 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.20226,-1.06308,-0.69420),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['miami'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='166: missing',
      children=[
      Transform(translation=(1.79777,0.79278,0.57536),
        children=[
        Shape(
          #  Vertex 166 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.94777,0.79278,0.57536),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['missing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='167: mission',
      children=[
      Transform(translation=(-0.07722,-0.53875,-0.59686),
        children=[
        Shape(
          #  Vertex 167 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.07278,-0.53875,-0.59686),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['mission'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='168: mobile',
      children=[
      Transform(translation=(1.69031,1.69092,0.61758),
        children=[
        Shape(
          #  Vertex 168 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.84031,1.69092,0.61758),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['mobile'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='169: news',
      children=[
      Transform(translation=(1.36465,-1.03840,-0.52014),
        children=[
        Shape(
          #  Vertex 169 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.51465,-1.03840,-0.52014),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['news'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='170: numerous',
      children=[
      Transform(translation=(-0.41717,2.58208,-1.86994),
        children=[
        Shape(
          #  Vertex 170 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.26717,2.58208,-1.86994),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['numerous'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='171: nurses',
      children=[
      Transform(translation=(-1.28038,0.50830,2.09565),
        children=[
        Shape(
          #  Vertex 171 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.13038,0.50830,2.09565),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['nurses'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='172: officer',
      children=[
      Transform(translation=(2.05638,-2.70259,1.30425),
        children=[
        Shape(
          #  Vertex 172 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.20638,-2.70259,1.30425),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['officer'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='173: operating',
      children=[
      Transform(translation=(-0.42998,-0.40866,-1.10468),
        children=[
        Shape(
          #  Vertex 173 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.27998,-0.40866,-1.10468),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['operating'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='174: operation',
      children=[
      Transform(translation=(1.65620,1.15105,1.21322),
        children=[
        Shape(
          #  Vertex 174 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.80620,1.15105,1.21322),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['operation'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='175: ops',
      children=[
      Transform(translation=(1.96869,-1.01867,-0.38115),
        children=[
        Shape(
          #  Vertex 175 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.11869,-1.01867,-0.38115),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['ops'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='176: options',
      children=[
      Transform(translation=(-0.09947,2.75053,-1.45420),
        children=[
        Shape(
          #  Vertex 176 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.05053,2.75053,-1.45420),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['options'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='177: pacific',
      children=[
      Transform(translation=(1.79512,1.51055,0.62356),
        children=[
        Shape(
          #  Vertex 177 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.94512,1.51055,0.62356),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['pacific'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='178: pages',
      children=[
      Transform(translation=(1.65554,1.20047,1.21306),
        children=[
        Shape(
          #  Vertex 178 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.80554,1.20047,1.21306),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['pages'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='179: part',
      children=[
      Transform(translation=(-0.78370,-1.01332,-1.02519),
        children=[
        Shape(
          #  Vertex 179 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.63370,-1.01332,-1.02519),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['part'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='180: patients',
      children=[
      Transform(translation=(-0.66376,1.73352,0.05144),
        children=[
        Shape(
          #  Vertex 180 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.51376,1.73352,0.05144),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['patients'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='181: pediatrics',
      children=[
      Transform(translation=(-0.91222,1.91772,0.02127),
        children=[
        Shape(
          #  Vertex 181 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.76222,1.91772,0.02127),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['pediatrics'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='182: people',
      children=[
      Transform(translation=(0.13249,1.51410,0.45034),
        children=[
        Shape(
          #  Vertex 182 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.28249,1.51410,0.45034),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['people'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='183: person',
      children=[
      Transform(translation=(1.52645,1.76643,0.67093),
        children=[
        Shape(
          #  Vertex 183 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.67645,1.76643,0.67093),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['person'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='184: personnel',
      children=[
      Transform(translation=(2.00286,-1.08230,-1.22006),
        children=[
        Shape(
          #  Vertex 184 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.15286,-1.08230,-1.22006),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['personnel'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='185: persons',
      children=[
      Transform(translation=(2.35209,0.99340,0.86151),
        children=[
        Shape(
          #  Vertex 185 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.50209,0.99340,0.86151),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['persons'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='186: petty',
      children=[
      Transform(translation=(1.96917,-2.51421,1.12252),
        children=[
        Shape(
          #  Vertex 186 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.11917,-2.51421,1.12252),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['petty'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='187: phone',
      children=[
      Transform(translation=(-0.51299,-0.74707,-0.46526),
        children=[
        Shape(
          #  Vertex 187 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.36299,-0.74707,-0.46526),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['phone'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='188: photo',
      children=[
      Transform(translation=(-0.39239,0.88445,-0.17941),
        children=[
        Shape(
          #  Vertex 188 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.24239,0.88445,-0.17941),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['photo'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='189: policy',
      children=[
      Transform(translation=(1.66366,0.24398,0.17922),
        children=[
        Shape(
          #  Vertex 189 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.81366,0.24398,0.17922),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['policy'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='190: presidents',
      children=[
      Transform(translation=(-0.55780,-0.64520,-0.53990),
        children=[
        Shape(
          #  Vertex 190 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.40780,-0.64520,-0.53990),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['presidents'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='191: press',
      children=[
      Transform(translation=(-0.03868,-0.40955,-1.01963),
        children=[
        Shape(
          #  Vertex 191 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.11132,-0.40955,-1.01963),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['press'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='192: profile',
      children=[
      Transform(translation=(-1.18172,2.08263,0.02609),
        children=[
        Shape(
          #  Vertex 192 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.03172,2.08263,0.02609),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['profile'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='193: programs',
      children=[
      Transform(translation=(-0.55648,0.84636,1.68140),
        children=[
        Shape(
          #  Vertex 193 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.40648,0.84636,1.68140),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['programs'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='194: prospective',
      children=[
      Transform(translation=(-0.58145,2.41612,-1.99364),
        children=[
        Shape(
          #  Vertex 194 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.43145,2.41612,-1.99364),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['prospective'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='195: providing',
      children=[
      Transform(translation=(-0.67382,0.76202,1.61470),
        children=[
        Shape(
          #  Vertex 195 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.52382,0.76202,1.61470),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['providing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='196: quake',
      children=[
      Transform(translation=(-0.84020,-1.10879,-0.39385),
        children=[
        Shape(
          #  Vertex 196 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.69020,-1.10879,-0.39385),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['quake'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='197: rebuild',
      children=[
      Transform(translation=(1.66848,1.20871,1.26068),
        children=[
        Shape(
          #  Vertex 197 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.81848,1.20871,1.26068),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rebuild'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='198: receive',
      children=[
      Transform(translation=(-0.66540,1.70154,0.08972),
        children=[
        Shape(
          #  Vertex 198 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.51540,1.70154,0.08972),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['receive'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='199: received',
      children=[
      Transform(translation=(-0.27366,2.36542,-1.66797),
        children=[
        Shape(
          #  Vertex 199 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.12366,2.36542,-1.66797),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['received'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='200: reconcile',
      children=[
      Transform(translation=(2.33591,-1.40826,-2.71845),
        children=[
        Shape(
          #  Vertex 200 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.48591,-1.40826,-2.71845),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['reconcile'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='201: recurring',
      children=[
      Transform(translation=(2.02116,1.29103,1.61453),
        children=[
        Shape(
          #  Vertex 201 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.17116,1.29103,1.61453),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['recurring'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='202: reproduction',
      children=[
      Transform(translation=(2.11025,-1.55900,0.01543),
        children=[
        Shape(
          #  Vertex 202 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.26025,-1.55900,0.01543),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['reproduction'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='203: request',
      children=[
      Transform(translation=(-0.65286,1.59766,-0.00388),
        children=[
        Shape(
          #  Vertex 203 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.50286,1.59766,-0.00388),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['request'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='204: rescue',
      children=[
      Transform(translation=(1.93817,-1.09632,-1.24515),
        children=[
        Shape(
          #  Vertex 204 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.08817,-1.09632,-1.24515),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rescue'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='205: rescued',
      children=[
      Transform(translation=(2.28405,-1.36736,-1.93960),
        children=[
        Shape(
          #  Vertex 205 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.43405,-1.36736,-1.93960),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rescued'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='206: rescuing',
      children=[
      Transform(translation=(2.57173,-1.45340,-2.55906),
        children=[
        Shape(
          #  Vertex 206 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.72173,-1.45340,-2.55906),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rescuing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='207: reserved',
      children=[
      Transform(translation=(1.84842,-1.55619,0.23868),
        children=[
        Shape(
          #  Vertex 207 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.99842,-1.55619,0.23868),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['reserved'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='208: response',
      children=[
      Transform(translation=(0.78930,1.48812,1.15647),
        children=[
        Shape(
          #  Vertex 208 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.93930,1.48812,1.15647),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['response'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='209: rubble',
      children=[
      Transform(translation=(2.15225,-1.49690,-2.32729),
        children=[
        Shape(
          #  Vertex 209 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.30225,-1.49690,-2.32729),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rubble'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='210: run',
      children=[
      Transform(translation=(-0.41269,-1.20072,-0.78895),
        children=[
        Shape(
          #  Vertex 210 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.26269,-1.20072,-0.78895),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['run'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='211: rushing',
      children=[
      Transform(translation=(0.34186,0.26481,-0.90311),
        children=[
        Shape(
          #  Vertex 211 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.49186,0.26481,-0.90311),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rushing'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='212: safe',
      children=[
      Transform(translation=(-0.91374,1.91957,0.02261),
        children=[
        Shape(
          #  Vertex 212 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.76374,1.91957,0.02261),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['safe'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='213: scenes',
      children=[
      Transform(translation=(2.20338,0.65553,0.59733),
        children=[
        Shape(
          #  Vertex 213 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.35338,0.65553,0.59733),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['scenes'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='214: se',
      children=[
      Transform(translation=(2.48542,-1.06402,-0.95612),
        children=[
        Shape(
          #  Vertex 214 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.63542,-1.06402,-0.95612),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['se'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='215: search',
      children=[
      Transform(translation=(2.21698,-1.44658,-1.88849),
        children=[
        Shape(
          #  Vertex 215 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.36698,-1.44658,-1.88849),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['search'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='216: secretary',
      children=[
      Transform(translation=(1.34392,1.96905,1.38923),
        children=[
        Shape(
          #  Vertex 216 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.49392,1.96905,1.38923),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['secretary'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='217: security',
      children=[
      Transform(translation=(2.08175,-0.48916,-0.17615),
        children=[
        Shape(
          #  Vertex 217 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.23175,-0.48916,-0.17615),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['security'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='218: serves',
      children=[
      Transform(translation=(0.24530,1.35018,0.15953),
        children=[
        Shape(
          #  Vertex 218 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.39530,1.35018,0.15953),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['serves'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='219: service',
      children=[
      Transform(translation=(0.50823,-0.51166,-0.55045),
        children=[
        Shape(
          #  Vertex 219 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.65823,-0.51166,-0.55045),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['service'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='220: services',
      children=[
      Transform(translation=(0.38945,2.37522,-0.58135),
        children=[
        Shape(
          #  Vertex 220 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.53945,2.37522,-0.58135),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['services'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='221: share',
      children=[
      Transform(translation=(1.59947,0.88606,0.41006),
        children=[
        Shape(
          #  Vertex 221 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.74947,0.88606,0.41006),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['share'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='222: shared',
      children=[
      Transform(translation=(2.31192,1.74532,0.71678),
        children=[
        Shape(
          #  Vertex 222 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.46192,1.74532,0.71678),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['shared'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='223: shelter',
      children=[
      Transform(translation=(-0.15463,1.67766,1.75695),
        children=[
        Shape(
          #  Vertex 223 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.00463,1.67766,1.75695),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['shelter'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='224: ships',
      children=[
      Transform(translation=(1.78846,-2.65879,1.51985),
        children=[
        Shape(
          #  Vertex 224 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.93846,-2.65879,1.51985),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['ships'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='225: shows',
      children=[
      Transform(translation=(-1.21091,-0.59614,-0.77452),
        children=[
        Shape(
          #  Vertex 225 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.06091,-0.59614,-0.77452),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['shows'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='226: similar',
      children=[
      Transform(translation=(-1.16352,-0.75967,-0.55546),
        children=[
        Shape(
          #  Vertex 226 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.01352,-0.75967,-0.55546),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['similar'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='227: soldiers',
      children=[
      Transform(translation=(-0.10718,-0.80387,-0.68790),
        children=[
        Shape(
          #  Vertex 227 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.04282,-0.80387,-0.68790),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['soldiers'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='228: south',
      children=[
      Transform(translation=(1.82824,1.39989,0.78437),
        children=[
        Shape(
          #  Vertex 228 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.97824,1.39989,0.78437),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['south'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='229: southern',
      children=[
      Transform(translation=(0.53916,-0.56069,-0.43642),
        children=[
        Shape(
          #  Vertex 229 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.68916,-0.56069,-0.43642),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['southern'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='230: started',
      children=[
      Transform(translation=(-1.41709,0.67584,1.92830),
        children=[
        Shape(
          #  Vertex 230 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.26709,0.67584,1.92830),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['started'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='231: state',
      children=[
      Transform(translation=(0.78686,1.65947,1.10693),
        children=[
        Shape(
          #  Vertex 231 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.93686,1.65947,1.10693),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['state'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='232: states',
      children=[
      Transform(translation=(0.60757,0.50207,-0.00994),
        children=[
        Shape(
          #  Vertex 232 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.75757,0.50207,-0.00994),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['states'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='233: status',
      children=[
      Transform(translation=(2.09161,-1.42937,-2.18352),
        children=[
        Shape(
          #  Vertex 233 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.24161,-1.42937,-2.18352),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['status'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='234: stricken',
      children=[
      Transform(translation=(-0.72706,-0.42560,-1.47218),
        children=[
        Shape(
          #  Vertex 234 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.57706,-0.42560,-1.47218),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['stricken'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='235: subject',
      children=[
      Transform(translation=(1.38594,-1.02371,-0.56484),
        children=[
        Shape(
          #  Vertex 235 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.53594,-1.02371,-0.56484),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['subject'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='236: success',
      children=[
      Transform(translation=(-0.77192,-1.09089,-0.38847),
        children=[
        Shape(
          #  Vertex 236 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.62192,-1.09089,-0.38847),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['success'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='237: sudan',
      children=[
      Transform(translation=(2.28647,1.48235,1.21404),
        children=[
        Shape(
          #  Vertex 237 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.43647,1.48235,1.21404),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sudan'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='238: sunday',
      children=[
      Transform(translation=(1.98692,1.46617,1.58728),
        children=[
        Shape(
          #  Vertex 238 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.13692,1.46617,1.58728),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sunday'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='239: super',
      children=[
      Transform(translation=(1.98445,1.71216,1.43569),
        children=[
        Shape(
          #  Vertex 239 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.13445,1.71216,1.43569),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['super'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='240: supplies',
      children=[
      Transform(translation=(-1.10753,0.66145,1.70555),
        children=[
        Shape(
          #  Vertex 240 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.95753,0.66145,1.70555),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['supplies'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='241: support',
      children=[
      Transform(translation=(-0.11059,0.66337,0.55795),
        children=[
        Shape(
          #  Vertex 241 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.03941,0.66337,0.55795),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['support'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='242: sustain',
      children=[
      Transform(translation=(1.01785,1.53823,1.20090),
        children=[
        Shape(
          #  Vertex 242 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.16785,1.53823,1.20090),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sustain'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='243: swift',
      children=[
      Transform(translation=(1.63019,1.56364,0.51539),
        children=[
        Shape(
          #  Vertex 243 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.78019,1.56364,0.51539),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['swift'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='244: team',
      children=[
      Transform(translation=(-0.28831,0.45710,0.66655),
        children=[
        Shape(
          #  Vertex 244 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.13831,0.45710,0.66655),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['team'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='245: teams',
      children=[
      Transform(translation=(-0.65101,0.79851,1.59613),
        children=[
        Shape(
          #  Vertex 245 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.50101,0.79851,1.59613),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['teams'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='246: terms',
      children=[
      Transform(translation=(2.17119,-1.58750,-2.29484),
        children=[
        Shape(
          #  Vertex 246 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.32119,-1.58750,-2.29484),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['terms'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='247: tool',
      children=[
      Transform(translation=(1.56544,2.16927,0.67946),
        children=[
        Shape(
          #  Vertex 247 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.71544,2.16927,0.67946),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['tool'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='248: topics',
      children=[
      Transform(translation=(1.66186,1.22070,1.20578),
        children=[
        Shape(
          #  Vertex 248 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.81186,1.22070,1.20578),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['topics'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='249: trapped',
      children=[
      Transform(translation=(2.20732,-1.42752,-2.37259),
        children=[
        Shape(
          #  Vertex 249 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.35732,-1.42752,-2.37259),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['trapped'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='250: travel',
      children=[
      Transform(translation=(1.76309,1.67484,0.53897),
        children=[
        Shape(
          #  Vertex 250 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.91309,1.67484,0.53897),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['travel'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='251: treated',
      children=[
      Transform(translation=(-0.91374,1.91957,0.02261),
        children=[
        Shape(
          #  Vertex 251 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.76374,1.91957,0.02261),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['treated'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='252: troops',
      children=[
      Transform(translation=(-0.14255,-0.52784,-0.68751),
        children=[
        Shape(
          #  Vertex 252 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.00745,-0.52784,-0.68751),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['troops'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='253: twitter',
      children=[
      Transform(translation=(0.63747,-0.69140,-1.08810),
        children=[
        Shape(
          #  Vertex 253 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.78747,-0.69140,-1.08810),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['twitter'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='254: understand',
      children=[
      Transform(translation=(-0.13883,2.57094,-1.95830),
        children=[
        Shape(
          #  Vertex 254 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.01117,2.57094,-1.95830),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['understand'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='255: united',
      children=[
      Transform(translation=(0.42980,0.28668,-0.11607),
        children=[
        Shape(
          #  Vertex 255 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.57980,0.28668,-0.11607),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['united'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='256: updates',
      children=[
      Transform(translation=(2.08084,-1.57303,-2.74168),
        children=[
        Shape(
          #  Vertex 256 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.23084,-1.57303,-2.74168),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['updates'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='257: uploaded',
      children=[
      Transform(translation=(2.17533,-2.19242,0.66137),
        children=[
        Shape(
          #  Vertex 257 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.32533,-2.19242,0.66137),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['uploaded'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='258: usa',
      children=[
      Transform(translation=(2.04915,-1.03151,-0.75551),
        children=[
        Shape(
          #  Vertex 258 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.19915,-1.03151,-0.75551),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['usa'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='259: vermont',
      children=[
      Transform(translation=(1.03294,-1.27027,-0.62397),
        children=[
        Shape(
          #  Vertex 259 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.18294,-1.27027,-0.62397),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['vermont'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='260: video',
      children=[
      Transform(translation=(2.07562,-1.12087,-0.32900),
        children=[
        Shape(
          #  Vertex 260 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.22562,-1.12087,-0.32900),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['video'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='261: videos',
      children=[
      Transform(translation=(2.54264,-1.17649,-0.84683),
        children=[
        Shape(
          #  Vertex 261 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.69264,-1.17649,-0.84683),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['videos'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='262: vital',
      children=[
      Transform(translation=(0.05477,1.99207,1.72521),
        children=[
        Shape(
          #  Vertex 262 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.20477,1.99207,1.72521),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['vital'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='263: washington',
      children=[
      Transform(translation=(2.00318,-1.18249,-1.46938),
        children=[
        Shape(
          #  Vertex 263 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.15318,-1.18249,-1.46938),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['washington'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='264: watches',
      children=[
      Transform(translation=(2.05095,-2.70434,1.30450),
        children=[
        Shape(
          #  Vertex 264 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.20095,-2.70434,1.30450),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['watches'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='265: water',
      children=[
      Transform(translation=(0.06658,1.92398,1.80153),
        children=[
        Shape(
          #  Vertex 265 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.21658,1.92398,1.80153),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['water'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='266: web',
      children=[
      Transform(translation=(2.17712,-1.48037,-1.91587),
        children=[
        Shape(
          #  Vertex 266 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.32712,-1.48037,-1.91587),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['web'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='267: welfare',
      children=[
      Transform(translation=(-0.16306,2.70833,-1.77649),
        children=[
        Shape(
          #  Vertex 267 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.01306,2.70833,-1.77649),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['welfare'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='268: western',
      children=[
      Transform(translation=(1.82823,1.39976,0.78465),
        children=[
        Shape(
          #  Vertex 268 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.97823,1.39976,0.78465),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['western'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='269: working',
      children=[
      Transform(translation=(0.11796,1.60997,-0.09799),
        children=[
        Shape(
          #  Vertex 269 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.26796,1.60997,-0.09799),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['working'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='270: worst',
      children=[
      Transform(translation=(-0.84020,-1.10879,-0.39385),
        children=[
        Shape(
          #  Vertex 270 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.69020,-1.10879,-0.39385),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['worst'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for 3.py")

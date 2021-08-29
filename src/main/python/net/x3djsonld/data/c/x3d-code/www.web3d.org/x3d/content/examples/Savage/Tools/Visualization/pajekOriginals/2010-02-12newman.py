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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(name='title',content='27. C:\Users\Elaine\Desktop\haiti_apan_lla2\Pajek Files\2010-02-12.net (195)'),
    meta(name='created',content='03-28-2011'),
    meta(name='generator',content='Vladimir Batagelj and Andrej Mrvar - program package Pajek: http://vlado.fmf.uni-lj.si/pub/networks/pajek/')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1.0000,1.0000,1.0000)]),
    Transform(translation=(0.84201,-0.17298,-2.28771),rotation=(-71.42856,0.00000,44.18661,1.04293),
      children=[
      Shape(
        #  Arc 1.25 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.97225))]),
    Transform(translation=(0.69379,-0.00872,-2.52730),rotation=(-71.42856,0.00000,44.18661,1.04293),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.40879,-0.07905,-1.51463),rotation=(83.18593,0.00000,-69.16901,1.01126),
      children=[
      Shape(
        #  Arc 1.58 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.27653))]),
    Transform(translation=(1.66794,0.17481,-1.20297),rotation=(83.18593,0.00000,-69.16901,1.01126),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.84201,-0.17298,-2.28771),rotation=(-71.42856,0.00000,44.18661,1.04293),
      children=[
      Shape(
        #  Arc 1.62 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.97225))]),
    Transform(translation=(0.69379,-0.00872,-2.52730),rotation=(-71.42856,0.00000,44.18661,1.04293),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.05578,-0.34351,-2.19137),rotation=(-52.16166,0.00000,1.43259,1.29327),
      children=[
      Shape(
        #  Arc 1.65 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.54257))]),
    Transform(translation=(1.05284,-0.31302,-2.29836),rotation=(-52.16166,0.00000,1.43259,1.29327),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.95811,-0.14644,-2.30578),rotation=(-75.04396,0.00000,20.96751,0.96234),
      children=[
      Shape(
        #  Arc 1.77 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.94961))]),
    Transform(translation=(0.88860,0.03350,-2.55456),rotation=(-75.04396,0.00000,20.96751,0.96234),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.04728,-0.43791,-2.16417),rotation=(-46.72123,0.00000,3.13276,1.65630),
      children=[
      Shape(
        #  Arc 1.83 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.46998))]),
    Transform(translation=(1.04228,-0.44431,-2.23872),rotation=(-46.72123,0.00000,3.13276,1.65630),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.92870,-0.62861,-1.92788),rotation=(0.53722,-0.00000,26.84960,2.57437),
      children=[
      Shape(
        #  Arc 1.87 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49982))]),
    Transform(translation=(0.88040,-0.70444,-1.92691),rotation=(0.53722,-0.00000,26.84960,2.57437),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.94056,-0.80517,-1.55195),rotation=(75.72215,-0.00000,24.47617,2.34273),
      children=[
      Shape(
        #  Arc 1.90 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.11058))]),
    Transform(translation=(0.85345,-1.08089,-1.28243),rotation=(75.72215,-0.00000,24.47617,2.34273),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.05952,-0.29227,-2.34105),rotation=(-82.09784,0.00000,0.68562,1.27395),
      children=[
      Shape(
        #  Arc 1.97 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85856))]),
    Transform(translation=(1.05737,-0.21351,-2.59854),rotation=(-82.09784,0.00000,0.68562,1.27395),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.87733,-0.58989,-2.29030),rotation=(-71.94697,0.00000,37.12201,1.97270),
      children=[
      Shape(
        #  Arc 1.123 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.87969))]),
    Transform(translation=(0.75924,-0.69936,-2.51917),rotation=(-71.94697,0.00000,37.12201,1.97270),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.05952,-0.29233,-2.34107),rotation=(-82.10080,0.00000,0.68441,1.27410),
      children=[
      Shape(
        #  Arc 1.128 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85855))]),
    Transform(translation=(1.05738,-0.21361,-2.59857),rotation=(-82.10080,0.00000,0.68441,1.27410),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.02676,-0.53928,-2.32943),rotation=(-79.77269,0.00000,7.23701,1.86520),
      children=[
      Shape(
        #  Arc 1.130 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83701))]),
    Transform(translation=(1.00441,-0.61429,-2.57580),rotation=(-79.77269,0.00000,7.23701,1.86520),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.04372,-0.46792,-2.17708),rotation=(-49.30291,0.00000,3.84395,1.77063),
      children=[
      Shape(
        #  Arc 1.131 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50457))]),
    Transform(translation=(1.03669,-0.48624,-2.26725),rotation=(-49.30291,0.00000,3.84395,1.77063),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.95265,-0.51247,-2.16612),rotation=(-47.11134,0.00000,22.05833,1.91972),
      children=[
      Shape(
        #  Arc 1.150 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.55355))]),
    Transform(translation=(0.90612,-0.55239,-2.26551),rotation=(-47.11134,0.00000,22.05833,1.91972),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.19613,-0.13812,-1.77562),rotation=(30.98811,0.00000,-26.63782,0.63086),
      children=[
      Shape(
        #  Arc 1.166 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.69279))]),
    Transform(translation=(1.26780,0.01240,-1.69225),rotation=(30.98811,0.00000,-26.63782,0.63086),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.20579,-0.54711,-1.53987),rotation=(78.13817,0.00000,-28.56949,1.87210),
      children=[
      Shape(
        #  Arc 1.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.87122))]),
    Transform(translation=(1.29617,-0.62890,-1.29268),rotation=(78.13817,0.00000,-28.56949,1.87210),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.87723,-0.58984,-2.29028),rotation=(-71.94360,0.00000,37.14318,1.97257),
      children=[
      Shape(
        #  Arc 1.173 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.87971))]),
    Transform(translation=(0.75907,-0.69928,-2.51915),rotation=(-71.94360,0.00000,37.14318,1.97257),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.11288,-0.36598,-1.90333),rotation=(5.44666,0.00000,-9.98638,0.83150),
      children=[
      Shape(
        #  Arc 1.184 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.15394))]),
    Transform(translation=(1.05901,-0.42192,-1.93271),rotation=(5.44666,0.00000,-9.98638,0.83150),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.73544,-0.33185,-2.28303),rotation=(-70.49421,0.00000,65.50055,1.39395),
      children=[
      Shape(
        #  Arc 1.186 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.97752))]),
    Transform(translation=(0.51515,-0.27402,-2.52012),rotation=(-70.49421,0.00000,65.50055,1.39395),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.73544,-0.33185,-2.28303),rotation=(-70.49421,0.00000,65.50055,1.39395),
      children=[
      Shape(
        #  Arc 1.192 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.97752))]),
    Transform(translation=(0.51515,-0.27402,-2.52012),rotation=(-70.49421,0.00000,65.50055,1.39395),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.73802,-0.48161,-2.28140),rotation=(-70.16720,0.00000,64.98429,1.70338),
      children=[
      Shape(
        #  Arc 1.194 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.96484))]),
    Transform(translation=(0.52087,-0.52423,-2.51588),rotation=(-70.16720,0.00000,64.98429,1.70338),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.92001,1.29697,-0.50086),rotation=(80.42291,0.00000,-14.23284,1.34380),
      children=[
      Shape(
        #  Arc 2.20 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83823))]),
    Transform(translation=(1.96400,1.35528,-0.25225),rotation=(80.42291,0.00000,-14.23284,1.34380),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.04444,1.13256,-1.07311),rotation=(-34.02674,0.00000,-39.12047,1.83483),
      children=[
      Shape(
        #  Arc 2.21 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53709))]),
    Transform(translation=(2.12351,1.10424,-1.14187),rotation=(-34.02674,0.00000,-39.12047,1.83483),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.81905,1.53811,-1.09940),rotation=(-39.28658,0.00000,5.95763,0.53470),
      children=[
      Shape(
        #  Arc 2.50 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77977))]),
    Transform(translation=(1.80149,1.73590,-1.21523),rotation=(-39.28658,0.00000,5.95763,0.53470),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.80174,0.73119,-1.00084),rotation=(-19.57325,0.00000,9.42077,2.91517),
      children=[
      Shape(
        #  Arc 2.58 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.96761))]),
    Transform(translation=(1.77021,0.41565,-1.06634),rotation=(-19.57325,0.00000,9.42077,2.91517),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.70229,1.57945,-1.09859),rotation=(-39.12366,0.00000,29.31103,0.57546),
      children=[
      Shape(
        #  Arc 2.63 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.89827))]),
    Transform(translation=(1.60794,1.82201,-1.22452),rotation=(-39.12366,0.00000,29.31103,0.57546),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.95083,1.29333,-0.32409),rotation=(115.77566,0.00000,-20.39792,1.41773),
      children=[
      Shape(
        #  Arc 2.74 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.18950))]),
    Transform(translation=(2.02538,1.35961,0.09905),rotation=(115.77566,0.00000,-20.39792,1.41773),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.04444,1.13256,-1.07311),rotation=(-34.02676,0.00000,-39.12045,1.83483),
      children=[
      Shape(
        #  Arc 2.75 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53709))]),
    Transform(translation=(2.12351,1.10424,-1.14187),rotation=(-34.02676,0.00000,-39.12045,1.83483),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.80640,1.58833,-1.03600),rotation=(-26.60492,0.00000,8.48820,0.34736),
      children=[
      Shape(
        #  Arc 2.79 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.82035))]),
    Transform(translation=(1.78052,1.82356,-1.11713),rotation=(-26.60492,0.00000,8.48820,0.34736),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.90130,1.39638,-0.79266),rotation=(22.06260,0.00000,-10.49129,0.56255),
      children=[
      Shape(
        #  Arc 2.85 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.45805))]),
    Transform(translation=(1.91711,1.45477,-0.75941),rotation=(22.06260,0.00000,-10.49129,0.56255),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.88605,1.40099,-0.99852),rotation=(-19.10939,0.00000,-7.44228,0.47712),
      children=[
      Shape(
        #  Arc 2.102 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44657))]),
    Transform(translation=(1.89660,1.45721,-1.02560),rotation=(-19.10939,0.00000,-7.44228,0.47712),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.84938,1.43165,-0.98265),rotation=(-15.93490,0.00000,-0.10758,0.33483),
      children=[
      Shape(
        #  Arc 2.108 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.48493))]),
    Transform(translation=(1.84956,1.50953,-1.00974),rotation=(-15.93490,0.00000,-0.10758,0.33483),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.71614,1.61128,-1.02758),rotation=(-24.92163,0.00000,26.53965,0.41908),
      children=[
      Shape(
        #  Arc 2.109 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.89469))]),
    Transform(translation=(1.63091,1.87376,-1.10762),rotation=(-24.92163,0.00000,26.53965,0.41908),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.87482,1.39773,-1.00208),rotation=(-19.82147,0.00000,-5.19565,0.48359),
      children=[
      Shape(
        #  Arc 2.112 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44071))]),
    Transform(translation=(1.88194,1.45117,-1.02922),rotation=(-19.82147,0.00000,-5.19565,0.48359),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.85092,1.34638,-0.97903),rotation=(-15.21238,0.00000,-0.41482,0.48687),
      children=[
      Shape(
        #  Arc 2.139 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32527))]),
    Transform(translation=(1.85095,1.34871,-0.98027),rotation=(-15.21238,0.00000,-0.41482,0.48687),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.88592,1.41967,-0.93059),rotation=(-5.52447,0.00000,-7.41564,0.20991),
      children=[
      Shape(
        #  Arc 2.146 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44379))]),
    Transform(translation=(1.89626,1.48021,-0.93830),rotation=(-5.52447,0.00000,-7.41564,0.20991),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.93352,0.78829,-0.91597),rotation=(-2.60029,0.00000,-16.93608,2.93770),
      children=[
      Shape(
        #  Arc 2.158 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.84624))]),
    Transform(translation=(1.98618,0.53062,-0.92406),rotation=(-2.60029,0.00000,-16.93608,2.93770),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.58908,0.67213,-1.26183),rotation=(-71.77108,0.00000,51.95196,2.44585),
      children=[
      Shape(
        #  Arc 2.166 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.38232))]),
    Transform(translation=(1.38946,0.26442,-1.53761),rotation=(-71.77108,0.00000,51.95196,2.44585),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.09125,1.52055,1.72862),rotation=(-62.82140,0.00000,1.06156,0.90027),
      children=[
      Shape(
        #  Arc 3.18 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.80192))]),
    Transform(translation=(-2.09444,1.67029,1.53986),rotation=(-62.82140,0.00000,1.06156,0.90027),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.02101,1.65049,1.77104),rotation=(-54.33768,0.00000,-12.98757,0.63504),
      children=[
      Shape(
        #  Arc 3.22 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.94179))]),
    Transform(translation=(-1.97813,1.90077,1.59167),rotation=(-54.33768,0.00000,-12.98757,0.63504),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.12321,1.25696,2.05012),rotation=(1.47759,-0.00000,7.45367,1.93390),
      children=[
      Shape(
        #  Arc 3.28 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.08129))]),
    Transform(translation=(-2.01377,1.29935,2.02842),rotation=(1.47759,-0.00000,7.45367,1.93390),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.19318,1.20890,2.10996),rotation=(13.44651,-0.00000,21.44623,2.02949),
      children=[
      Shape(
        #  Arc 3.39 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28231))]),
    Transform(translation=(-2.17886,1.21724,2.10099),rotation=(13.44651,-0.00000,21.44623,2.02949),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.11515,1.41679,2.00075),rotation=(-8.39676,0.00000,5.84020,0.33821),
      children=[
      Shape(
        #  Arc 3.41 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.30826))]),
    Transform(translation=(-2.11403,1.41126,2.00235),rotation=(-8.39676,0.00000,5.84020,0.33821),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.94139,1.61834,2.02544),rotation=(-3.45796,0.00000,-28.91195,0.39731),
      children=[
      Shape(
        #  Arc 3.51 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.75251))]),
    Transform(translation=(-1.85830,1.81776,2.01550),rotation=(-3.45796,0.00000,-28.91195,0.39731),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.36345,1.09801,1.88366),rotation=(-31.81386,0.00000,55.50105,2.06753),
      children=[
      Shape(
        #  Arc 3.59 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.72767))]),
    Transform(translation=(-2.51892,1.00087,1.79454),rotation=(-31.81386,0.00000,55.50105,2.06753),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.24968,0.85085,2.01238),rotation=(-6.06985,0.00000,32.74729,2.76456),
      children=[
      Shape(
        #  Arc 3.61 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.90464))]),
    Transform(translation=(-2.35550,0.57906,1.99277),rotation=(-6.06985,0.00000,32.74729,2.76456),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.17881,1.35787,1.93940),rotation=(-20.66548,0.00000,18.57266,1.01404),
      children=[
      Shape(
        #  Arc 3.64 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32728))]),
    Transform(translation=(-2.18087,1.35979,1.93711),rotation=(-20.66548,0.00000,18.57266,1.01404),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.98146,1.59692,2.00547),rotation=(-7.45262,0.00000,-20.89702,0.32843),
      children=[
      Shape(
        #  Arc 3.68 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.68782))]),
    Transform(translation=(-1.92559,1.77100,1.98554),rotation=(-7.45262,0.00000,-20.89702,0.32843),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.05092,1.55412,1.75481),rotation=(-57.58470,0.00000,-7.00589,0.79819),
      children=[
      Shape(
        #  Arc 3.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.81008))]),
    Transform(translation=(-2.02972,1.72515,1.58062),rotation=(-57.58470,0.00000,-7.00589,0.79819),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.00792,1.00955,2.36114),rotation=(63.68123,0.00000,-15.60440,2.24476),
      children=[
      Shape(
        #  Arc 3.78 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83913))]),
    Transform(translation=(-1.95966,0.84756,2.55812),rotation=(63.68123,0.00000,-15.60440,2.24476),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.94396,1.16150,2.38450),rotation=(68.35435,0.00000,-28.39792,1.85946),
      children=[
      Shape(
        #  Arc 3.86 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77213))]),
    Transform(translation=(-1.86081,1.09714,2.58463),rotation=(68.35435,0.00000,-28.39792,1.85946),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.80637,1.38257,2.34667),rotation=(60.78779,0.00000,-55.91473,1.30782),
      children=[
      Shape(
        #  Arc 3.95 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85534))]),
    Transform(translation=(-1.63139,1.45216,2.53690),rotation=(60.78779,0.00000,-55.91473,1.30782),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.15005,1.38624,1.96228),rotation=(-16.08980,0.00000,12.82176,0.73044),
      children=[
      Shape(
        #  Arc 3.116 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.30836))]),
    Transform(translation=(-2.14763,1.38191,1.96532),rotation=(-16.08980,0.00000,12.82176,0.73044),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.87317,1.45065,2.28477),rotation=(48.40856,0.00000,-42.55497,1.06319),
      children=[
      Shape(
        #  Arc 3.118 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.73753))]),
    Transform(translation=(-1.75271,1.55213,2.42180),rotation=(48.40856,0.00000,-42.55497,1.06319),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.03144,1.21833,2.24923),rotation=(41.29889,0.00000,-10.90195,1.81435),
      children=[
      Shape(
        #  Arc 3.124 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44013))]),
    Transform(translation=(-2.01656,1.20384,2.30558),rotation=(41.29889,0.00000,-10.90195,1.81435),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.94411,1.16121,2.38447),rotation=(68.34791,0.00000,-28.36635,1.86023),
      children=[
      Shape(
        #  Arc 3.144 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77212))]),
    Transform(translation=(-1.86106,1.09669,2.58458),rotation=(68.34791,0.00000,-28.36635,1.86023),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.00792,1.00955,2.36114),rotation=(63.68123,0.00000,-15.60431,2.24476),
      children=[
      Shape(
        #  Arc 3.148 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83913))]),
    Transform(translation=(-1.95966,0.84756,2.55812),rotation=(63.68123,0.00000,-15.60431,2.24476),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.19318,1.20890,2.10996),rotation=(13.44651,-0.00000,21.44623,2.02949),
      children=[
      Shape(
        #  Arc 3.152 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28231))]),
    Transform(translation=(-2.17886,1.21724,2.10099),rotation=(13.44651,-0.00000,21.44623,2.02949),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.80637,1.38257,2.34667),rotation=(60.78780,0.00000,-55.91471,1.30782),
      children=[
      Shape(
        #  Arc 3.162 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85534))]),
    Transform(translation=(-1.63139,1.45216,2.53690),rotation=(60.78780,0.00000,-55.91471,1.30782),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.84129,1.24587,2.39715),rotation=(70.88405,0.00000,-48.93141,1.62999),
      children=[
      Shape(
        #  Arc 3.164 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.86284))]),
    Transform(translation=(-1.68737,1.22982,2.62013),rotation=(70.88405,0.00000,-48.93141,1.62999),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.10892,0.95185,2.29009),rotation=(49.47083,-0.00000,4.59528,2.48078),
      children=[
      Shape(
        #  Arc 3.165 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.80950))]),
    Transform(translation=(-2.12282,0.75862,2.43966),rotation=(49.47083,-0.00000,4.59528,2.48078),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.20381,0.57407,1.90163),rotation=(-28.22034,0.00000,23.57230,2.88381),
      children=[
      Shape(
        #  Arc 3.172 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.44232))]),
    Transform(translation=(-2.29552,0.03145,1.79183),rotation=(-28.22034,0.00000,23.57230,2.88381),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.02831,1.38672,2.16756),rotation=(24.96544,0.00000,-11.52702,0.87284),
      children=[
      Shape(
        #  Arc 3.176 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35891))]),
    Transform(translation=(-2.02206,1.39923,2.18109),rotation=(24.96544,0.00000,-11.52702,0.87284),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.26259,1.17757,1.98519),rotation=(-11.50720,0.00000,35.32968,2.03848),
      children=[
      Shape(
        #  Arc 3.179 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.41626))]),
    Transform(translation=(-2.30345,1.15587,1.97189),rotation=(-11.50720,0.00000,35.32968,2.03848),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.25593,1.04649,2.11342),rotation=(14.13818,-0.00000,33.99607,2.45564),
      children=[
      Shape(
        #  Arc 3.193 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58128))]),
    Transform(translation=(-2.33233,0.94540,2.14520),rotation=(14.13818,-0.00000,33.99607,2.45564),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.02822,1.52097,1.38054),rotation=(34.22267,-0.00000,13.18290,0.45670),
      children=[
      Shape(
        #  Arc 4.14 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83163))]),
    Transform(translation=(1.98766,1.75057,1.48581),rotation=(34.22267,-0.00000,13.18290,0.45670),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.04265,1.26953,0.55534),rotation=(-130.81644,0.00000,10.29592,1.38731),
      children=[
      Shape(
        #  Arc 4.20 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.33461))]),
    Transform(translation=(2.00351,1.36209,0.05809),rotation=(-130.81644,0.00000,10.29592,1.38731),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.10630,1.37504,1.29854),rotation=(17.82267,0.00000,-2.43338,0.37683),
      children=[
      Shape(
        #  Arc 4.33 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.48884))]),
    Transform(translation=(2.11050,1.45354,1.32931),rotation=(17.82267,0.00000,-2.43338,0.37683),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.14375,1.14320,1.49161),rotation=(56.43778,0.00000,-9.92462,1.58676),
      children=[
      Shape(
        #  Arc 4.45 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.57311))]),
    Transform(translation=(2.16567,1.14118,1.61624),rotation=(56.43778,0.00000,-9.92462,1.58676),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.09277,0.88290,1.37038),rotation=(32.19133,-0.00000,0.27169,2.59553),
      children=[
      Shape(
        #  Arc 4.48 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61989))]),
    Transform(translation=(2.09211,0.75477,1.44825),rotation=(32.19133,-0.00000,0.27169,2.59553),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.07348,1.26589,0.73210),rotation=(-95.46369,0.00000,4.13085,1.32843),
      children=[
      Shape(
        #  Arc 4.74 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.98430))]),
    Transform(translation=(2.05954,1.34561,0.40996),rotation=(-95.46369,0.00000,4.13085,1.32843),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.08166,1.50595,1.35216),rotation=(28.54775,-0.00000,2.49314,0.38053),
      children=[
      Shape(
        #  Arc 4.76 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77155))]),
    Transform(translation=(2.07437,1.71558,1.43570),rotation=(28.54775,-0.00000,2.49314,0.38053),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.08582,0.76563,1.36414),rotation=(30.94340,-0.00000,1.66178,2.75640),
      children=[
      Shape(
        #  Arc 4.96 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.82472))]),
    Transform(translation=(2.08074,0.53176,1.45882),rotation=(30.94340,-0.00000,1.66178,2.75640),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.08123,0.67807,1.41434),rotation=(40.98325,-0.00000,2.58083,2.72949),
      children=[
      Shape(
        #  Arc 4.104 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.02523))]),
    Transform(translation=(2.07235,0.35498,1.55530),rotation=(40.98325,-0.00000,2.58083,2.72949),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12539,1.22779,1.49426),rotation=(56.96733,0.00000,-6.25185,1.29848),
      children=[
      Shape(
        #  Arc 4.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.59502))]),
    Transform(translation=(2.13984,1.26478,1.62591),rotation=(56.96733,0.00000,-6.25185,1.29848),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.11214,1.42706,0.91324),rotation=(-59.23549,0.00000,-3.60226,0.81566),
      children=[
      Shape(
        #  Arc 4.159 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.81498))]),
    Transform(translation=(2.12308,1.59669,0.73336),rotation=(-59.23549,0.00000,-3.60226,0.81566),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.08166,1.50595,1.35216),rotation=(28.54776,-0.00000,2.49316,0.38053),
      children=[
      Shape(
        #  Arc 4.170 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77155))]),
    Transform(translation=(2.07437,1.71558,1.43570),rotation=(28.54776,-0.00000,2.49316,0.38053),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12865,1.16900,1.13814),rotation=(-14.25634,0.00000,-6.90481,1.30894),
      children=[
      Shape(
        #  Arc 4.171 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.16399))]),
    Transform(translation=(2.09581,1.14881,1.20595),rotation=(-14.25634,0.00000,-6.90481,1.30894),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.41590,-0.79423,1.60611),rotation=(14.25633,-0.00000,18.73822,1.05037),
      children=[
      Shape(
        #  Arc 5.15 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.27138))]),
    Transform(translation=(-2.39911,-0.80631,1.59334),rotation=(14.25633,-0.00000,18.73822,1.05037),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.25431,-1.18134,1.40632),rotation=(-25.70151,0.00000,-13.57819,2.71484),
      children=[
      Shape(
        #  Arc 5.34 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.70227))]),
    Transform(translation=(-2.21736,-1.35533,1.33637),rotation=(-25.70151,0.00000,-13.57819,2.71484),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.50638,-0.91267,1.51036),rotation=(-4.89431,0.00000,36.83554,1.83858),
      children=[
      Shape(
        #  Arc 5.44 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.38533))]),
    Transform(translation=(-2.53761,-0.92131,1.50621),rotation=(-4.89431,0.00000,36.83554,1.83858),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.01951,-1.25562,1.17362),rotation=(-72.24134,0.00000,-60.53989,2.26703),
      children=[
      Shape(
        #  Arc 5.52 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.22845))]),
    Transform(translation=(-1.79566,-1.54693,0.90650),rotation=(-72.24134,0.00000,-60.53989,2.26703),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.41698,-0.79334,1.60435),rotation=(13.90407,-0.00000,18.95535,1.04406),
      children=[
      Shape(
        #  Arc 5.99 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.27194))]),
    Transform(translation=(-2.40023,-0.80542,1.59206),rotation=(13.90407,-0.00000,18.95535,1.04406),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.50986,-0.90814,1.50492),rotation=(-5.98090,0.00000,37.53150,1.81053),
      children=[
      Shape(
        #  Arc 5.100 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.39124))]),
    Transform(translation=(-2.54403,-0.91660,1.49948),rotation=(-5.98090,0.00000,37.53150,1.81053),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.53713,-0.94313,1.32982),rotation=(-41.00209,0.00000,42.98475,1.83838),
      children=[
      Shape(
        #  Arc 5.122 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61596))]),
    Transform(translation=(-2.64040,-0.98225,1.23131),rotation=(-41.00209,0.00000,42.98475,1.83838),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.35250,-0.99035,1.64981),rotation=(22.99585,-0.00000,6.05887,2.39555),
      children=[
      Shape(
        #  Arc 5.134 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35037))]),
    Transform(translation=(-2.35513,-1.00150,1.65977),rotation=(22.99585,-0.00000,6.05887,2.39555),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.32194,-0.49248,1.64768),rotation=(22.57010,0.00000,-0.05374,0.29663),
      children=[
      Shape(
        #  Arc 5.172 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77215))]),
    Transform(translation=(-2.32178,-0.27628,1.71376),rotation=(22.57010,0.00000,-0.05374,0.29663),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.30383,-1.07146,1.73760),rotation=(40.55458,0.00000,-3.67493,2.37109),
      children=[
      Shape(
        #  Arc 5.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58465))]),
    Transform(translation=(-2.29551,-1.16641,1.82939),rotation=(40.55458,0.00000,-3.67493,2.37109),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.61444,1.48866,-2.40348),rotation=(-1.69152,0.00000,-13.06336,0.78200),
      children=[
      Shape(
        #  Arc 6.56 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.18692))]),
    Transform(translation=(-1.66094,1.44145,-2.39746),rotation=(-1.69152,0.00000,-13.06336,0.78200),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.74190,1.35448,-2.38288),rotation=(2.42833,-0.00000,12.42786,2.39085),
      children=[
      Shape(
        #  Arc 6.140 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.18562))]),
    Transform(translation=(-1.69691,1.40361,-2.39167),rotation=(2.42833,-0.00000,12.42786,2.39085),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.14811,-0.44602,-0.87737),rotation=(-25.73009,0.00000,-35.22878,1.13875),
      children=[
      Shape(
        #  Arc 7.16 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.48039))]),
    Transform(translation=(2.20692,-0.41244,-0.92032),rotation=(-25.73009,0.00000,-35.22878,1.13875),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.89322,-0.78970,-0.69440),rotation=(10.86303,-0.00000,15.74849,2.76671),
      children=[
      Shape(
        #  Arc 7.36 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52249))]),
    Transform(translation=(1.86270,-0.88391,-0.67335),rotation=(10.86303,-0.00000,15.74849,2.76671),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.23372,-0.68153,-1.07015),rotation=(-64.28564,0.00000,-52.35087,1.88549),
      children=[
      Shape(
        #  Arc 7.40 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.87187))]),
    Transform(translation=(2.39940,-0.76694,-1.27360),rotation=(-64.28564,0.00000,-52.35087,1.88549),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12614,-0.71351,-0.84844),rotation=(-19.94441,0.00000,-30.83590,2.30857),
      children=[
      Shape(
        #  Arc 7.46 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49629))]),
    Transform(translation=(2.18091,-0.77280,-0.88386),rotation=(-19.94441,0.00000,-30.83590,2.30857),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.86330,-0.14343,-0.92371),rotation=(-34.99856,0.00000,21.73288,0.47235),
      children=[
      Shape(
        #  Arc 7.58 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.90548))]),
    Transform(translation=(1.79304,0.11725,-1.03686),rotation=(-34.99856,0.00000,21.73288,0.47235),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.31727,-0.43448,-0.98714),rotation=(-47.68344,0.00000,-69.06163,1.30971),
      children=[
      Shape(
        #  Arc 7.67 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.86868))]),
    Transform(translation=(2.53538,-0.36366,-1.13773),rotation=(-47.68344,0.00000,-69.06163,1.30971),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.05218,-0.78622,-0.77506),rotation=(-5.26735,0.00000,-16.04293,2.80283),
      children=[
      Shape(
        #  Arc 7.73 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50812))]),
    Transform(translation=(2.08188,-0.87493,-0.78481),rotation=(-5.26735,0.00000,-16.04293,2.80283),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.15863,-0.71769,-0.74395),rotation=(0.95321,0.00000,-37.33273,2.31256),
      children=[
      Shape(
        #  Arc 7.80 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50652))]),
    Transform(translation=(2.22736,-0.78070,-0.74220),rotation=(0.95321,0.00000,-37.33273,2.31256),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.06673,-0.57502,-0.49995),rotation=(49.75357,0.00000,-18.95395,1.67715),
      children=[
      Shape(
        #  Arc 7.84 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53544))]),
    Transform(translation=(2.10486,-0.58645,-0.39986),rotation=(49.75357,0.00000,-18.95395,1.67715),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.14105,-0.62195,-0.94428),rotation=(-39.11196,0.00000,-33.81806,1.85443),
      children=[
      Shape(
        #  Arc 7.89 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53857))]),
    Transform(translation=(2.20968,-0.65254,-1.02364),rotation=(-39.11196,0.00000,-33.81806,1.85443),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.27379,-0.33291,-0.91852),rotation=(-33.96023,0.00000,-60.36463,1.01794),
      children=[
      Shape(
        #  Arc 7.93 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.81386))]),
    Transform(translation=(2.45694,-0.20324,-1.02156),rotation=(-33.96023,0.00000,-60.36463,1.01794),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.13891,-0.76745,-0.72114),rotation=(5.51632,0.00000,-33.38886,2.48784),
      children=[
      Shape(
        #  Arc 7.94 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.55645))]),
    Transform(translation=(2.20985,-0.86130,-0.70942),rotation=(5.51632,0.00000,-33.38886,2.48784),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.18077,-0.47027,-0.89751),rotation=(-29.75795,0.00000,-41.76170,1.28147),
      children=[
      Shape(
        #  Arc 7.98 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53503))]),
    Transform(translation=(2.26469,-0.43960,-0.95731),rotation=(-29.75795,0.00000,-41.76170,1.28147),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.18847,-0.55308,-0.63260),rotation=(23.22358,0.00000,-43.30130,1.59720),
      children=[
      Shape(
        #  Arc 7.103 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49153))]),
    Transform(translation=(2.26402,-0.55535,-0.59208),rotation=(23.22358,0.00000,-43.30130,1.59720),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.58745,-0.81013,-0.60695),rotation=(28.35323,-0.00000,76.90298,2.14227),
      children=[
      Shape(
        #  Arc 7.106 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.97447))]),
    Transform(translation=(1.32920,-0.98712,-0.51174),rotation=(28.35323,-0.00000,76.90298,2.14227),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.07461,-0.72083,-0.67296),rotation=(15.15097,0.00000,-20.52943,2.50959),
      children=[
      Shape(
        #  Arc 7.107 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.43190))]),
    Transform(translation=(2.10120,-0.76597,-0.65334),rotation=(15.15097,0.00000,-20.52943,2.50959),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.93111,-0.54471,-0.86184),rotation=(-22.62337,0.00000,8.17039,1.55509),
      children=[
      Shape(
        #  Arc 7.115 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.24056))]),
    Transform(translation=(1.94460,-0.54533,-0.82448),rotation=(-22.62337,0.00000,8.17039,1.55509),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.08789,-0.52778,-0.50212),rotation=(49.31991,0.00000,-23.18593,1.50185),
      children=[
      Shape(
        #  Arc 7.120 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.54628))]),
    Transform(translation=(2.13591,-0.51999,-0.39997),rotation=(49.31991,0.00000,-23.18593,1.50185),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.03184,-0.44515,-0.81005),rotation=(-12.26533,0.00000,-11.97577,0.70151),
      children=[
      Shape(
        #  Arc 7.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.26562))]),
    Transform(translation=(2.01958,-0.46592,-0.79749),rotation=(-12.26533,0.00000,-11.97577,0.70151),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.93965,-0.70593,-0.97201),rotation=(-44.65739,0.00000,6.46363,2.18567),
      children=[
      Shape(
        #  Arc 7.132 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.55240))]),
    Transform(translation=(1.92605,-0.77296,-1.06595),rotation=(-44.65739,0.00000,6.46363,2.18567),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.22177,-0.60516,-0.67711),rotation=(14.32225,0.00000,-49.96096,1.79247),
      children=[
      Shape(
        #  Arc 7.157 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53277))]),
    Transform(translation=(2.32153,-0.62855,-0.64851),rotation=(14.32225,0.00000,-49.96096,1.79247),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.99508,-0.08633,-0.83885),rotation=(-18.02559,0.00000,-4.62397,0.19947),
      children=[
      Shape(
        #  Arc 7.158 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.93915))]),
    Transform(translation=(2.01033,0.21711,-0.89826),rotation=(-18.02559,0.00000,-4.62397,0.19947),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.20782,-0.48077,-0.78247),rotation=(-6.75018,0.00000,-47.17084,1.30124),
      children=[
      Shape(
        #  Arc 7.161 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49437))]),
    Transform(translation=(2.29100,-0.45755,-0.79437),rotation=(-6.75018,0.00000,-47.17084,1.30124),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.66030,-0.61149,-0.94895),rotation=(-40.04632,0.00000,62.33240,1.74422),
      children=[
      Shape(
        #  Arc 7.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.75216))]),
    Transform(translation=(1.48123,-0.64878,-1.06400),rotation=(-40.04632,0.00000,62.33240,1.74422),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.20752,-0.92905,-0.67823),rotation=(14.09830,0.00000,-47.11097,2.57023),
      children=[
      Shape(
        #  Arc 7.175 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.90934))]),
    Transform(translation=(2.36018,-1.17691,-0.63254),rotation=(14.09830,0.00000,-47.11097,2.57023),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.06636,-0.86551,-1.04993),rotation=(-60.24260,0.00000,-18.87859,2.36133),
      children=[
      Shape(
        #  Arc 7.183 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.89743))]),
    Transform(translation=(2.12709,-1.07071,-1.24374),rotation=(-60.24260,0.00000,-18.87859,2.36133),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.36201,-0.68956,-0.62029),rotation=(25.68556,0.00000,-78.00900,1.90581),
      children=[
      Shape(
        #  Arc 7.185 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.86964))]),
    Transform(translation=(2.60853,-0.77991,-0.53912),rotation=(25.68556,0.00000,-78.00900,1.90581),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.92518,-0.71532,-0.88326),rotation=(-26.90771,0.00000,9.35652,2.44047),
      children=[
      Shape(
        #  Arc 7.187 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44162))]),
    Transform(translation=(1.91230,-0.76179,-0.92031),rotation=(-26.90771,0.00000,9.35652,2.44047),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.14384,-0.64328,-0.89981),rotation=(-30.21751,0.00000,-34.37615,1.97053),
      children=[
      Shape(
        #  Arc 7.191 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49686))]),
    Transform(translation=(2.20503,-0.67769,-0.95359),rotation=(-30.21751,0.00000,-34.37615,1.97053),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.99724,-0.45709,-0.17325),rotation=(115.09356,0.00000,-5.05603,1.41665),
      children=[
      Shape(
        #  Arc 7.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.16587))]),
    Transform(translation=(2.01558,-0.39216,0.24427),rotation=(115.09356,0.00000,-5.05603,1.41665),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.19117,-1.03443,0.10548),rotation=(125.87107,0.00000,-71.08117,1.12720),
      children=[
      Shape(
        #  Arc 8.60 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.60045))]),
    Transform(translation=(1.47551,-0.75965,0.60900),rotation=(125.87107,0.00000,-71.08117,1.12720),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.82700,-1.79648,-0.42050),rotation=(20.67449,-0.00000,1.75281,2.89865),
      children=[
      Shape(
        #  Arc 8.66 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.86251))]),
    Transform(translation=(0.82149,-2.05977,-0.35548),rotation=(20.67449,-0.00000,1.75281,2.89865),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.80409,-1.56297,-0.54332),rotation=(-3.88941,0.00000,6.33399,2.94343),
      children=[
      Shape(
        #  Arc 8.88 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.37756))]),
    Transform(translation=(0.79927,-1.59119,-0.54629),rotation=(-3.88941,0.00000,6.33399,2.94343),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.82697,-1.28519,-0.84861),rotation=(-64.94668,0.00000,1.75809,1.29284),
      children=[
      Shape(
        #  Arc 8.90 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.67564))]),
    Transform(translation=(0.82235,-1.23640,-1.01954),rotation=(-64.94668,0.00000,1.75809,1.29284),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.01935,-1.22577,-0.49453),rotation=(5.86889,0.00000,-36.71700,0.88506),
      children=[
      Shape(
        #  Arc 8.106 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.48043))]),
    Transform(translation=(1.08065,-1.17498,-0.48473),rotation=(5.86889,0.00000,-36.71700,0.88506),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.79993,-1.78267,-0.54327),rotation=(-3.87987,0.00000,7.16750,3.04126),
      children=[
      Shape(
        #  Arc 8.119 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.81366))]),
    Transform(translation=(0.77818,-2.02826,-0.55504),rotation=(-3.87987,0.00000,7.16750,3.04126),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.47543,-1.55173,-0.41564),rotation=(21.64674,-0.00000,72.06654,2.00363),
      children=[
      Shape(
        #  Arc 8.133 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.82892))]),
    Transform(translation=(0.25420,-1.65846,-0.34919),rotation=(21.64674,-0.00000,72.06654,2.00363),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.80206,-1.64018,-0.46552),rotation=(11.67007,-0.00000,6.74063,2.89013),
      children=[
      Shape(
        #  Arc 8.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.54163))]),
    Transform(translation=(0.78827,-1.74751,-0.44165),rotation=(11.67007,-0.00000,6.74063,2.89013),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.71389,-1.58317,-0.83954),rotation=(-63.13369,0.00000,24.37440,2.11610),
      children=[
      Shape(
        #  Arc 8.147 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.79155))]),
    Transform(translation=(0.64129,-1.70546,-1.02760),rotation=(-63.13369,0.00000,24.37440,2.11610),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.67537,-1.58015,-0.47579),rotation=(9.61636,-0.00000,32.07923,2.45008),
      children=[
      Shape(
        #  Arc 8.163 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52516))]),
    Transform(translation=(0.61271,-1.65916,-0.45701),rotation=(9.61636,-0.00000,32.07923,2.45008),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.79993,-1.78267,-0.54327),rotation=(-3.87987,0.00000,7.16749,3.04126),
      children=[
      Shape(
        #  Arc 8.167 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.81366))]),
    Transform(translation=(0.77818,-2.02826,-0.55504),rotation=(-3.87987,0.00000,7.16749,3.04126),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.09220,-1.02714,-0.83653),rotation=(-62.53065,0.00000,-51.28757,0.85628),
      children=[
      Shape(
        #  Arc 8.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.07058))]),
    Transform(translation=(1.27199,-0.78123,-1.05573),rotation=(-62.53065,0.00000,-51.28757,0.85628),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.86946,-1.40983,-0.68789),rotation=(-32.80252,0.00000,-6.74001,1.75930),
      children=[
      Shape(
        #  Arc 8.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34092))]),
    Transform(translation=(0.87153,-1.41179,-0.69795),rotation=(-32.80252,0.00000,-6.74001,1.75930),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.19353,-0.22048,1.69436),rotation=(20.36374,0.00000,-36.98349,2.04351),
      children=[
      Shape(
        #  Arc 9.19 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.47420))]),
    Transform(translation=(2.25366,-0.25559,1.72747),rotation=(20.36374,0.00000,-36.98349,2.04351),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.05326,0.14340,1.89817),rotation=(61.12571,0.00000,-8.92838,0.87886),
      children=[
      Shape(
        #  Arc 9.26 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.80225))]),
    Transform(translation=(2.08009,0.29725,2.08189),rotation=(61.12571,0.00000,-8.92838,0.87886),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.94095,-0.28685,1.97888),rotation=(77.26807,-0.00000,13.53380,1.98902),
      children=[
      Shape(
        #  Arc 9.27 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85843))]),
    Transform(translation=(1.89850,-0.39619,2.22120),rotation=(77.26807,-0.00000,13.53380,1.98902),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.91289,-0.33581,1.52912),rotation=(-12.68387,0.00000,19.14642,2.66657),
      children=[
      Shape(
        #  Arc 9.29 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50216))]),
    Transform(translation=(1.87816,-0.41681,1.50612),rotation=(-12.68387,0.00000,19.14642,2.66657),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.13799,0.00876,1.71167),rotation=(23.82653,0.00000,-25.87510,0.96706),
      children=[
      Shape(
        #  Arc 9.35 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.42727))]),
    Transform(translation=(2.17047,0.03921,1.74158),rotation=(23.82653,0.00000,-25.87510,0.96706),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.99319,-0.16777,1.71833),rotation=(25.15774,-0.00000,3.08459,1.98184),
      children=[
      Shape(
        #  Arc 9.37 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.27649))]),
    Transform(translation=(1.99562,-0.15908,1.69853),rotation=(25.15774,-0.00000,3.08459,1.98184),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.89246,-0.11597,2.04126),rotation=(89.74365,-0.00000,23.23166,1.57822),
      children=[
      Shape(
        #  Arc 9.38 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.92704))]),
    Transform(translation=(1.81640,-0.11822,2.33509),rotation=(89.74365,-0.00000,23.23166,1.57822),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.07245,-0.28373,1.76333),rotation=(34.15763,0.00000,-12.76651,2.32471),
      children=[
      Shape(
        #  Arc 9.42 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50020))]),
    Transform(translation=(2.09545,-0.34540,1.82486),rotation=(34.15763,0.00000,-12.76651,2.32471),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.05002,0.25275,1.56194),rotation=(-6.12050,0.00000,-8.27953,0.14001),
      children=[
      Shape(
        #  Arc 9.48 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.73779))]),
    Transform(translation=(2.07346,0.45960,1.54461),rotation=(-6.12050,0.00000,-8.27953,0.14001),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12400,-0.21712,1.77025),rotation=(35.54101,0.00000,-23.07707,2.02933),
      children=[
      Shape(
        #  Arc 9.49 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.47257))]),
    Transform(translation=(2.16126,-0.25089,1.82762),rotation=(35.54101,0.00000,-23.07707,2.02933),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.19256,-0.24111,1.62244),rotation=(5.97952,0.00000,-36.78774,2.17476),
      children=[
      Shape(
        #  Arc 9.53 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.45281))]),
    Transform(translation=(2.24651,-0.27882,1.63121),rotation=(5.97952,0.00000,-36.78774,2.17476),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.83120,-0.18379,2.05142),rotation=(91.77510,-0.00000,35.48388,1.71464),
      children=[
      Shape(
        #  Arc 9.57 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.99423))]),
    Transform(translation=(1.71088,-0.23212,2.36260),rotation=(91.77510,-0.00000,35.48388,1.71464),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.77760,-0.40176,1.16369),rotation=(-85.77047,0.00000,46.20423,2.10661),
      children=[
      Shape(
        #  Arc 9.60 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.13302))]),
    Transform(translation=(1.61182,-0.60930,0.85596),rotation=(-85.77047,0.00000,46.20423,2.10661),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.95251,0.05283,2.00859),rotation=(83.21019,-0.00000,11.22239,1.19557),
      children=[
      Shape(
        #  Arc 9.71 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.90242))]),
    Transform(translation=(1.91629,0.15955,2.27711),rotation=(83.21019,-0.00000,11.22239,1.19557),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.04306,0.13548,1.55570),rotation=(-7.36842,0.00000,-6.88945,0.20064),
      children=[
      Shape(
        #  Arc 9.96 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50617))]),
    Transform(translation=(2.05573,0.22669,1.54215),rotation=(-7.36842,0.00000,-6.88945,0.20064),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.03847,0.04792,1.60590),rotation=(2.67143,0.00000,-5.97039,0.20107),
      children=[
      Shape(
        #  Arc 9.104 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32750))]),
    Transform(translation=(2.03915,0.05159,1.60620),rotation=(2.67143,0.00000,-5.97039,0.20107),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.09184,-0.26259,1.76673),rotation=(34.83860,0.00000,-16.64540,2.23153),
      children=[
      Shape(
        #  Arc 9.105 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.48903))]),
    Transform(translation=(2.12061,-0.31445,1.82694),rotation=(34.83860,0.00000,-16.64540,2.23153),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.93631,-0.27021,1.98518),rotation=(78.52824,-0.00000,14.46205,1.94694),
      children=[
      Shape(
        #  Arc 9.111 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85851))]),
    Transform(translation=(1.89095,-0.36912,2.23147),rotation=(78.52824,-0.00000,14.46205,1.94694),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.94649,-0.14344,1.84825),rotation=(51.14136,-0.00000,12.42629,1.68770),
      children=[
      Shape(
        #  Arc 9.114 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52991))]),
    Transform(translation=(1.92187,-0.15568,1.94954),rotation=(51.14136,-0.00000,12.42629,1.68770),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12002,-0.23081,1.42552),rotation=(-33.40461,0.00000,-22.28018,2.10320),
      children=[
      Shape(
        #  Arc 9.125 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.46603))]),
    Transform(translation=(2.15493,-0.26787,1.37318),rotation=(-33.40461,0.00000,-22.28018,2.10320),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.06558,-0.29043,1.76196),rotation=(33.88296,0.00000,-11.39307,2.35385),
      children=[
      Shape(
        #  Arc 9.145 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.50436))]),
    Transform(translation=(2.08641,-0.35546,1.82388),rotation=(33.88296,0.00000,-11.39307,2.35385),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.00108,0.03342,1.79386),rotation=(40.26327,-0.00000,1.50813,0.94385),
      children=[
      Shape(
        #  Arc 9.149 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49754))]),
    Transform(translation=(1.99839,0.08549,1.86569),rotation=(40.26327,-0.00000,1.50813,0.94385),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.15164,-0.15810,1.76779),rotation=(35.05054,0.00000,-28.60494,1.76958),
      children=[
      Shape(
        #  Arc 9.154 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.46150))]),
    Transform(translation=(2.19550,-0.17207,1.82153),rotation=(35.05054,0.00000,-28.60494,1.76958),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.09906,0.04471,1.70336),rotation=(22.16381,0.00000,-18.08878,0.73816),
      children=[
      Shape(
        #  Arc 9.155 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.42513))]),
    Transform(translation=(2.12143,0.08359,1.73076),rotation=(22.16381,0.00000,-18.08878,0.73816),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.16274,-0.09406,1.75742),rotation=(32.97623,0.00000,-30.82469,1.48916),
      children=[
      Shape(
        #  Arc 9.156 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.45291))]),
    Transform(translation=(2.20797,-0.08864,1.80581),rotation=(32.97623,0.00000,-30.82469,1.48916),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.91260,-0.41693,1.96521),rotation=(74.53430,-0.00000,19.20389,2.24000),
      children=[
      Shape(
        #  Arc 9.188 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.98135))]),
    Transform(translation=(1.84789,-0.62206,2.21636),rotation=(74.53430,-0.00000,19.20389,2.24000),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.01557,-0.24006,0.99738),rotation=(-119.03231,0.00000,-1.39060,1.78187),
      children=[
      Shape(
        #  Arc 9.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.21742))]),
    Transform(translation=(2.02070,-0.33407,0.55866),rotation=(-119.03231,0.00000,-1.39060,1.78187),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.72691,-2.17224,-0.13540),rotation=(-14.81272,0.00000,-23.89601,1.61245),
      children=[
      Shape(
        #  Arc 10.24 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28139))]),
    Transform(translation=(-0.74331,-2.17144,-0.12524),rotation=(-14.81272,0.00000,-23.89601,1.61245),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.13891,-2.34753,0.06238),rotation=(24.74335,-0.00000,58.50247,2.08914),
      children=[
      Shape(
        #  Arc 10.30 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.73126))]),
    Transform(translation=(-1.30341,-2.44941,0.13196),rotation=(24.74335,-0.00000,58.50247,2.08914),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.98045,-2.39075,0.22308),rotation=(56.88340,-0.00000,26.81072,2.19059),
      children=[
      Shape(
        #  Arc 10.43 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77255))]),
    Transform(translation=(-1.05897,-2.52219,0.38969),rotation=(56.88340,-0.00000,26.81072,2.19059),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.98045,-2.39075,0.22308),rotation=(56.88340,-0.00000,26.81072,2.19059),
      children=[
      Shape(
        #  Arc 10.47 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77255))]),
    Transform(translation=(-1.05897,-2.52219,0.38969),rotation=(56.88340,-0.00000,26.81072,2.19059),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.28160,-1.90796,0.37554),rotation=(87.37511,-0.00000,87.04140,1.17396),
      children=[
      Shape(
        #  Arc 10.52 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.33723))]),
    Transform(translation=(-1.61266,-1.71138,0.70787),rotation=(87.37511,-0.00000,87.04140,1.17396),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.98379,-2.45299,-0.04803),rotation=(2.66217,-0.00000,27.47905,2.69276),
      children=[
      Shape(
        #  Arc 10.70 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.63625))]),
    Transform(translation=(-1.05208,-2.59546,-0.04141),rotation=(2.66217,-0.00000,27.47905,2.69276),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.96390,-2.22113,-0.17837),rotation=(-23.40645,0.00000,23.50226,1.88965),
      children=[
      Shape(
        #  Arc 10.91 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34930))]),
    Transform(translation=(-0.97376,-2.22572,-0.18819),rotation=(-23.40645,0.00000,23.50226,1.88965),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.87015,-2.43457,0.21970),rotation=(56.20693,-0.00000,4.75097,2.33103),
      children=[
      Shape(
        #  Arc 10.101 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.77838))]),
    Transform(translation=(-0.88414,-2.59250,0.38520),rotation=(56.20693,-0.00000,4.75097,2.33103),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.76045,-2.45949,-0.07799),rotation=(-3.33140,0.00000,-17.18857,2.85136),
      children=[
      Shape(
        #  Arc 10.110 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61180))]),
    Transform(translation=(-0.71946,-2.59928,-0.08594),rotation=(-3.33140,0.00000,-17.18857,2.85136),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.17878,-2.13270,0.22187),rotation=(56.64239,-0.00000,66.47703,1.49381),
      children=[
      Shape(
        #  Arc 10.117 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.87595))]),
    Transform(translation=(-1.38974,-2.11132,0.40162),rotation=(56.64239,-0.00000,66.47703,1.49381),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.68335,-2.22749,-0.09805),rotation=(-7.34320,0.00000,-32.60854,1.92136),
      children=[
      Shape(
        #  Arc 10.129 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35590))]),
    Transform(translation=(-0.66690,-2.23366,-0.10176),rotation=(-7.34320,0.00000,-32.60854,1.92136),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.36565,-1.94597,-0.18437),rotation=(-24.60698,0.00000,-96.14910,1.15282),
      children=[
      Shape(
        #  Arc 10.133 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.08597))]),
    Transform(translation=(-0.02656,-1.79052,-0.27115),rotation=(-24.60698,0.00000,-96.14910,1.15282),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.84812,-2.45426,0.19285),rotation=(50.83762,-0.00000,0.34605,2.41826),
      children=[
      Shape(
        #  Arc 10.136 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.76809))]),
    Transform(translation=(-0.84913,-2.62221,0.34114),rotation=(50.83762,-0.00000,0.34605,2.41826),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.14443,-2.26163,-0.25578),rotation=(-38.88748,0.00000,59.60776,1.83233),
      children=[
      Shape(
        #  Arc 10.141 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.73676))]),
    Transform(translation=(-1.31302,-2.31551,-0.36576),rotation=(-38.88748,0.00000,59.60776,1.83233),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.11072,-2.38391,-0.11570),rotation=(-10.87321,0.00000,52.86618,2.24924),
      children=[
      Shape(
        #  Arc 10.142 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.69325))]),
    Transform(translation=(-1.25304,-2.50104,-0.14497),rotation=(-10.87321,0.00000,52.86618,2.24924),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.93834,-2.33529,-0.05431),rotation=(1.40565,-0.00000,18.38926,2.64188),
      children=[
      Shape(
        #  Arc 10.143 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.38489))]),
    Transform(translation=(-0.95384,-2.36377,-0.05312),rotation=(1.40565,-0.00000,18.38926,2.64188),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.13944,-2.08388,-0.31293),rotation=(-50.31792,0.00000,58.60982,1.36036),
      children=[
      Shape(
        #  Arc 10.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.78989))]),
    Transform(translation=(-1.31377,-2.03480,-0.46259),rotation=(-50.31792,0.00000,58.60982,1.36036),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.31987,-1.27577,-1.33368),rotation=(-4.80611,0.00000,37.90784,0.88638),
      children=[
      Shape(
        #  Arc 11.81 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49319))]),
    Transform(translation=(-2.38643,-1.22103,-1.34212),rotation=(-4.80611,0.00000,37.90784,0.88638),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.25043,-1.37571,-1.33776),rotation=(-5.62111,0.00000,24.02115,1.14487),
      children=[
      Shape(
        #  Arc 11.92 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.27090))]),
    Transform(translation=(-2.22867,-1.38585,-1.33266),rotation=(-5.62111,0.00000,24.02115,1.14487),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.24728,-1.21202,-1.49117),rotation=(-36.30472,0.00000,23.39029,0.77685),
      children=[
      Shape(
        #  Arc 11.126 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61605))]),
    Transform(translation=(-2.30348,-1.10646,-1.57841),rotation=(-36.30472,0.00000,23.39029,0.77685),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.13283,-1.33659,-1.57781),rotation=(-53.63254,0.00000,0.50072,1.23007),
      children=[
      Shape(
        #  Arc 11.127 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.56906))]),
    Transform(translation=(-2.13393,-1.29498,-1.69518),rotation=(-53.63254,0.00000,0.50072,1.23007),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.13283,-1.33659,-1.57781),rotation=(-53.63253,0.00000,0.50072,1.23007),
      children=[
      Shape(
        #  Arc 11.137 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.56906))]),
    Transform(translation=(-2.13393,-1.29498,-1.69518),rotation=(-53.63253,0.00000,0.50072,1.23007),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.78141,-1.71653,-0.93708),rotation=(74.51325,0.00000,-69.78369,2.07980),
      children=[
      Shape(
        #  Arc 11.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.16909))]),
    Transform(translation=(-1.52800,-1.92341,-0.66650),rotation=(74.51325,0.00000,-69.78369,2.07980),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.04919,-1.65915,-1.16589),rotation=(28.75219,0.00000,-16.22828,2.51383),
      children=[
      Shape(
        #  Arc 11.174 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.56213))]),
    Transform(translation=(-2.01424,-1.75713,-1.10397),rotation=(28.75219,0.00000,-16.22828,2.51383),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.31986,-1.27577,-1.33369),rotation=(-4.80774,0.00000,37.90734,0.88637),
      children=[
      Shape(
        #  Arc 11.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49319))]),
    Transform(translation=(-2.38642,-1.22102,-1.34213),rotation=(-4.80774,0.00000,37.90734,0.88637),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.24728,-1.21202,-1.49117),rotation=(-36.30473,0.00000,23.39029,0.77685),
      children=[
      Shape(
        #  Arc 11.190 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61605))]),
    Transform(translation=(-2.30348,-1.10646,-1.57841),rotation=(-36.30473,0.00000,23.39029,0.77685),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.93612,2.35994,0.64353),rotation=(-39.13097,0.00000,-3.68449,1.08347),
      children=[
      Shape(
        #  Arc 12.17 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44482))]),
    Transform(translation=(-1.93095,2.38916,0.58862),rotation=(-39.13097,0.00000,-3.68449,1.08347),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.02555,2.01275,1.12685),rotation=(57.53364,-0.00000,14.20151,2.25776),
      children=[
      Shape(
        #  Arc 12.18 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.76645))]),
    Transform(translation=(-2.06691,1.87118,1.29441),rotation=(57.53364,-0.00000,14.20151,2.25776),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.95531,2.14268,1.16927),rotation=(66.01736,-0.00000,0.15238,1.90091),
      children=[
      Shape(
        #  Arc 12.22 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.69786))]),
    Transform(translation=(-1.95572,2.08144,1.34799),rotation=(66.01736,-0.00000,0.15238,1.90091),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.74875,2.50419,0.64396),rotation=(-39.04458,0.00000,-41.15958,0.85157),
      children=[
      Shape(
        #  Arc 12.23 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.75410))]),
    Transform(translation=(-1.63028,2.64718,0.53158),rotation=(-39.04458,0.00000,-41.15958,0.85157),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.85304,2.33970,1.06987),rotation=(46.13722,0.00000,-20.30063,1.24939),
      children=[
      Shape(
        #  Arc 12.31 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53126))]),
    Transform(translation=(-1.81268,2.37307,1.16160),rotation=(46.13722,0.00000,-20.30063,1.24939),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.87612,2.40793,0.73013),rotation=(-21.80964,0.00000,-15.68514,0.72327),
      children=[
      Shape(
        #  Arc 12.32 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.40590))]),
    Transform(translation=(-1.85952,2.44013,0.70705),rotation=(-21.80964,0.00000,-15.68514,0.72327),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.88678,2.41242,0.49741),rotation=(-68.35465,0.00000,-13.55303,1.14834),
      children=[
      Shape(
        #  Arc 12.54 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.76402))]),
    Transform(translation=(-1.84740,2.50344,0.29878),rotation=(-68.35465,0.00000,-13.55303,1.14834),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.92520,2.38464,0.72952),rotation=(-21.93192,0.00000,-5.86960,0.72220),
      children=[
      Shape(
        #  Arc 12.55 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34346))]),
    Transform(translation=(-1.92319,2.39344,0.72203),rotation=(-21.93192,0.00000,-5.86960,0.72220),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.98522,2.04631,1.15303),rotation=(62.77034,-0.00000,6.13406,2.15714),
      children=[
      Shape(
        #  Arc 12.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.75716))]),
    Transform(translation=(-2.00292,1.92537,1.33424),rotation=(62.77034,-0.00000,6.13406,2.15714),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.88425,2.41430,0.49880),rotation=(-68.07547,0.00000,-14.05967,1.14290),
      children=[
      Shape(
        #  Arc 12.72 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.76400))]),
    Transform(translation=(-1.84339,2.50642,0.30099),rotation=(-68.07547,0.00000,-14.05967,1.14290),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.91464,2.32763,0.88486),rotation=(9.13645,0.00000,-7.98052,0.70117),
      children=[
      Shape(
        #  Arc 12.82 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.18805))]),
    Transform(translation=(-1.94264,2.27722,0.85281),rotation=(9.13645,0.00000,-7.98052,0.70117),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.02848,2.20301,0.94312),rotation=(20.78711,-0.00000,14.78596,1.96314),
      children=[
      Shape(
        #  Arc 12.113 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.27607))]),
    Transform(translation=(-2.01671,2.21141,0.92658),rotation=(20.78711,-0.00000,14.78596,1.96314),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.73154,2.50017,0.81691),rotation=(-4.45409,0.00000,-44.60027,0.74216),
      children=[
      Shape(
        #  Arc 12.138 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.66316))]),
    Transform(translation=(-1.61615,2.62662,0.80539),rotation=(-4.45409,0.00000,-44.60027,0.74216),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.06889,2.25612,0.47662),rotation=(-72.51179,0.00000,22.86863,1.56993),
      children=[
      Shape(
        #  Arc 12.151 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.76032))]),
    Transform(translation=(-2.13511,2.25631,0.26665),rotation=(-72.51179,0.00000,22.86863,1.56993),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.03990,2.27165,0.63045),rotation=(-41.74584,0.00000,17.07162,1.50056),
      children=[
      Shape(
        #  Arc 12.160 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.45213))]),
    Transform(translation=(-2.06485,2.27629,0.56945),rotation=(-41.74584,0.00000,17.07162,1.50056),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.17250,2.09207,0.83805),rotation=(-0.22580,0.00000,43.59141,2.21504),
      children=[
      Shape(
        #  Arc 12.177 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.54520))]),
    Transform(translation=(-2.26253,2.02444,0.83759),rotation=(-0.22580,0.00000,43.59141,2.21504),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.91008,2.39308,0.78859),rotation=(-10.11877,0.00000,-8.89367,0.45611),
      children=[
      Shape(
        #  Arc 12.178 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.30586))]),
    Transform(translation=(-1.91213,2.38674,0.79093),rotation=(-10.11877,0.00000,-8.89367,0.45611),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.06889,2.25612,0.47662),rotation=(-72.51186,0.00000,22.86843,1.56992),
      children=[
      Shape(
        #  Arc 12.189 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.76032))]),
    Transform(translation=(-2.13511,2.25631,0.26665),rotation=(-72.51186,0.00000,22.86843,1.56992),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.60007,-0.84520,1.58164),rotation=(-19.15064,0.00000,18.09732,2.30310),
      children=[
      Shape(
        #  Arc 15.44 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35432))]),
    Transform(translation=(-2.60884,-0.85668,1.57236),rotation=(-19.15064,0.00000,18.09732,2.30310),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.41563,-0.42501,1.71896),rotation=(8.31376,0.00000,-18.79196,0.32819),
      children=[
      Shape(
        #  Arc 15.172 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.63751))]),
    Transform(translation=(-2.36883,-0.27473,1.73966),rotation=(8.31376,0.00000,-18.79196,0.32819),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.35692,-0.36970,-1.02616),rotation=(-4.02786,0.00000,-6.53292,2.13443),
      children=[
      Shape(
        #  Arc 16.98 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.09079))]),
    Transform(translation=(2.27445,-0.30847,-0.97532),rotation=(-4.02786,0.00000,-6.53292,2.13443),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.20799,-0.34457,-0.93870),rotation=(13.46475,-0.00000,23.25301,1.56430),
      children=[
      Shape(
        #  Arc 16.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.26871))]),
    Transform(translation=(2.23018,-0.34474,-0.95155),rotation=(13.46475,-0.00000,23.25301,1.56430),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.86836,2.51656,0.30175),rotation=(-29.22368,0.00000,-9.86853,1.24281),
      children=[
      Shape(
        #  Arc 17.54 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32582))]),
    Transform(translation=(-1.86748,2.51750,0.29914),rotation=(-29.22368,0.00000,-9.86853,1.24281),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.86583,2.51845,0.30315),rotation=(-28.94451,0.00000,-10.37517,1.23090),
      children=[
      Shape(
        #  Arc 17.72 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32614))]),
    Transform(translation=(-1.86485,2.51947,0.30043),rotation=(-28.94451,0.00000,-10.37517,1.23090),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.12045,1.66595,1.68664),rotation=(54.42464,-0.00000,4.77864,1.93380),
      children=[
      Shape(
        #  Arc 18.41 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58442))]),
    Transform(translation=(-2.13126,1.61901,1.80976),rotation=(54.42464,-0.00000,4.77864,1.93380),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.18412,1.60703,1.62530),rotation=(42.15593,-0.00000,17.51110,2.19004),
      children=[
      Shape(
        #  Arc 18.64 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.56057))]),
    Transform(translation=(-2.22169,1.53721,1.71575),rotation=(42.15593,-0.00000,17.51110,2.19004),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.09948,1.95997,1.23078),rotation=(-36.74653,0.00000,0.58445,0.76801),
      children=[
      Shape(
        #  Arc 18.113 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52902))]),
    Transform(translation=(-2.10064,2.03514,1.15819),rotation=(-36.74653,0.00000,0.58445,0.76801),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.24351,1.84903,1.12572),rotation=(-57.75944,0.00000,29.38990,1.33074),
      children=[
      Shape(
        #  Arc 18.177 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.66720))]),
    Transform(translation=(-2.31998,1.89030,0.97543),rotation=(-57.75944,0.00000,29.38990,1.33074),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.37747,-0.34906,1.72426),rotation=(-14.38422,0.00000,0.19574,1.85007),
      children=[
      Shape(
        #  Arc 19.53 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.14965))]),
    Transform(translation=(2.37859,-0.32558,1.80612),rotation=(-14.38422,0.00000,0.19574,1.85007),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.02200,1.38765,0.07802),rotation=(35.35274,0.00000,-6.16507,1.59107),
      children=[
      Shape(
        #  Arc 20.74 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35894))]),
    Transform(translation=(2.02534,1.38725,0.09720),rotation=(35.35274,0.00000,-6.16507,1.59107),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.97246,1.49070,-0.39054),rotation=(-58.36031,0.00000,3.74155,1.24307),
      children=[
      Shape(
        #  Arc 20.85 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61768))]),
    Transform(translation=(1.96345,1.53861,-0.53117),rotation=(-58.36031,0.00000,3.74155,1.24307),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.06066,1.54882,0.25916),rotation=(71.58095,0.00000,-13.89818,1.16295),
      children=[
      Shape(
        #  Arc 20.159 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.79433))]),
    Transform(translation=(2.10216,1.64289,0.47288),rotation=(71.58095,0.00000,-13.89818,1.16295),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12912,0.71821,-1.08611),rotation=(31.42646,-0.00000,22.18439,2.63211),
      children=[
      Shape(
        #  Arc 21.158 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.78872))]),
    Transform(translation=(2.06321,0.51361,-0.99273),rotation=(31.42646,-0.00000,22.18439,2.63211),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.87645,1.99744,1.75375),rotation=(50.87972,0.00000,-15.92438,1.69080),
      children=[
      Shape(
        #  Arc 22.51 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53700))]),
    Transform(translation=(-1.84427,1.98445,1.85655),rotation=(50.87972,0.00000,-15.92438,1.69080),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.91541,2.21453,1.21495),rotation=(-56.88091,0.00000,-8.13289,0.99883),
      children=[
      Shape(
        #  Arc 22.82 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.68336))]),
    Transform(translation=(-1.89378,2.31287,1.06372),rotation=(-56.88091,0.00000,-8.13289,0.99883),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.67032,2.65633,0.53491),rotation=(17.23494,-0.00000,25.47443,2.13008),
      children=[
      Shape(
        #  Arc 23.32 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.36286))]),
    Transform(translation=(-1.68537,2.64496,0.54509),rotation=(17.23494,-0.00000,25.47443,2.13008),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.84442,-2.22699,-0.25243),rotation=(-8.59373,0.00000,47.39827,1.77106),
      children=[
      Shape(
        #  Arc 24.91 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49153))]),
    Transform(translation=(-0.92713,-2.24405,-0.26743),rotation=(-8.59373,0.00000,47.39827,1.77106),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.24617,-1.95183,-0.25844),rotation=(-9.79425,0.00000,-72.25309,1.01534),
      children=[
      Shape(
        #  Arc 24.133 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.85815))]),
    Transform(translation=(-0.01962,-1.80994,-0.28915),rotation=(-9.79425,0.00000,-72.25309,1.01534),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.08311,0.30385,1.91153),rotation=(-58.45429,0.00000,2.95799,1.88617),
      children=[
      Shape(
        #  Arc 26.104 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.61566))]),
    Transform(translation=(2.07601,0.25800,1.77117),rotation=(-58.45429,0.00000,2.95799,1.88617),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.92553,-0.34209,2.10467),rotation=(-52.11033,0.00000,-10.44921,1.14951),
      children=[
      Shape(
        #  Arc 27.37 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58240))]),
    Transform(translation=(1.94906,-0.28844,1.98728),rotation=(-52.11033,0.00000,-10.44921,1.14951),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.23044,1.19446,2.11735),rotation=(11.96891,-0.00000,13.99256,2.05194),
      children=[
      Shape(
        #  Arc 28.39 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.20772))]),
    Transform(translation=(-2.19262,1.22044,2.08500),rotation=(11.96891,-0.00000,13.99256,2.05194),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.21608,1.34343,1.94679),rotation=(-22.14307,0.00000,11.11899,0.88728),
      children=[
      Shape(
        #  Arc 28.64 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.31957))]),
    Transform(translation=(-2.21600,1.34330,1.94694),rotation=(-22.14307,0.00000,11.11899,0.88728),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.18732,1.37181,1.96967),rotation=(-17.56739,0.00000,5.36809,0.61770),
      children=[
      Shape(
        #  Arc 28.116 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.31717))]),
    Transform(translation=(-2.18708,1.37065,1.97045),rotation=(-17.56739,0.00000,5.36809,0.61770),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.23044,1.19446,2.11735),rotation=(11.96891,-0.00000,13.99256,2.05194),
      children=[
      Shape(
        #  Arc 28.152 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.20772))]),
    Transform(translation=(-2.19262,1.22044,2.08500),rotation=(11.96891,-0.00000,13.99256,2.05194),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.29319,1.03206,2.12081),rotation=(12.66058,-0.00000,26.54240,2.53179),
      children=[
      Shape(
        #  Arc 28.193 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.51348))]),
    Transform(translation=(-2.34320,0.95275,2.14466),rotation=(12.66058,-0.00000,26.54240,2.53179),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.68186,-0.62504,1.10027),rotation=(-73.08660,0.00000,27.05780,1.73844),
      children=[
      Shape(
        #  Arc 29.60 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.79043))]),
    Transform(translation=(1.60135,-0.66428,0.88278),rotation=(-73.08660,0.00000,27.05780,1.73844),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.88371,2.13022,1.38372),rotation=(16.63311,-0.00000,26.43468,2.65247),
      children=[
      Shape(
        #  Arc 31.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.66472))]),
    Transform(translation=(-1.95226,1.97807,1.42685),rotation=(16.63311,-0.00000,26.43468,2.65247),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.84677,2.53678,0.62047),rotation=(-0.12228,0.00000,9.81554,2.01377),
      children=[
      Shape(
        #  Arc 32.55 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.10865))]),
    Transform(translation=(-1.75130,2.58208,0.62166),rotation=(-0.12228,0.00000,9.81554,2.01377),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.09383,1.73322,1.44127),rotation=(10.72508,-0.00000,4.92652,0.42351),
      children=[
      Shape(
        #  Arc 33.76 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28719))]),
    Transform(translation=(2.09665,1.71827,1.43515),rotation=(10.72508,-0.00000,4.92652,0.42351),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.09383,1.73322,1.44127),rotation=(10.72509,-0.00000,4.92654,0.42351),
      children=[
      Shape(
        #  Arc 33.170 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28719))]),
    Transform(translation=(2.09664,1.71827,1.43515),rotation=(10.72509,-0.00000,4.92654,0.42351),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.95162,-1.57526,1.04511),rotation=(-46.53983,0.00000,-46.96170,1.79182),
      children=[
      Shape(
        #  Arc 34.52 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.67765))]),
    Transform(translation=(-1.82769,-1.61446,0.92230),rotation=(-46.53983,0.00000,-46.96170,1.79182),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.17244,0.25676,1.67483),rotation=(-31.19495,0.00000,18.98566,0.96410),
      children=[
      Shape(
        #  Arc 35.96 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44451))]),
    Transform(translation=(2.14585,0.29226,1.63114),rotation=(-31.19495,0.00000,18.98566,0.96410),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.29212,0.02722,1.87655),rotation=(9.14970,0.00000,-4.94959,2.67326),
      children=[
      Shape(
        #  Arc 35.156 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.23045))]),
    Transform(translation=(2.28250,0.06717,1.85878),rotation=(9.14970,0.00000,-4.94959,2.67326),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.97344,-1.02932,-0.72074),rotation=(-16.13038,0.00000,-31.79141,1.55127),
      children=[
      Shape(
        #  Arc 36.73 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35656))]),
    Transform(translation=(1.98974,-1.02896,-0.72901),rotation=(-16.13038,0.00000,-31.79141,1.55127),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.50871,-1.05323,-0.55264),rotation=(17.49020,-0.00000,61.15449,1.63495),
      children=[
      Shape(
        #  Arc 36.106 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.63738))]),
    Transform(translation=(1.35645,-1.06340,-0.50909),rotation=(17.49020,-0.00000,61.15449,1.63495),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.92088,-0.32545,2.11097),rotation=(53.37050,-0.00000,11.37747,1.92997),
      children=[
      Shape(
        #  Arc 37.111 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58289))]),
    Transform(translation=(1.89523,-0.37165,2.23132),rotation=(53.37050,-0.00000,11.37747,1.92997),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.93106,-0.19867,1.97404),rotation=(25.98363,-0.00000,9.34170,1.39633),
      children=[
      Shape(
        #  Arc 37.114 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28038))]),
    Transform(translation=(1.93766,-0.20211,1.95567),rotation=(25.98363,-0.00000,9.34170,1.39633),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.83033,-0.14687,2.29697),rotation=(-38.60228,0.00000,-10.80536,1.70698),
      children=[
      Shape(
        #  Arc 38.114 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.40461))]),
    Transform(translation=(1.84163,-0.15262,2.25661),rotation=(-38.60228,0.00000,-10.80536,1.70698),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.40281,-0.75689,-1.26571),rotation=(25.17368,-0.00000,18.53281,1.20663),
      children=[
      Shape(
        #  Arc 40.89 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.33454))]),
    Transform(translation=(2.39878,-0.75430,-1.26024),rotation=(25.17368,-0.00000,18.53281,1.20663),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.05751,1.53212,2.12557),rotation=(33.36220,0.00000,-17.36722,1.72936),
      children=[
      Shape(
        #  Arc 41.176 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.38090))]),
    Transform(translation=(-2.04363,1.52731,2.15224),rotation=(33.36220,0.00000,-17.36722,1.72936),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.15568,-0.43378,1.93752),rotation=(0.68097,0.00000,-3.87890,0.74996),
      children=[
      Shape(
        #  Arc 42.105 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.05778))]),
    Transform(translation=(2.06766,-0.52972,1.92207),rotation=(0.68097,0.00000,-3.87890,0.74996),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12942,-0.46162,1.93274),rotation=(-0.27466,0.00000,1.37344,2.33433),
      children=[
      Shape(
        #  Arc 42.145 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.01939))]),
    Transform(translation=(2.23589,-0.35769,1.95404),rotation=(-0.27466,0.00000,1.37344,2.33433),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.13544,0.76105,1.64633),rotation=(-25.49437,0.00000,11.58640,2.78647),
      children=[
      Shape(
        #  Arc 45.96 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.80539))]),
    Transform(translation=(2.10053,0.53350,1.56950),rotation=(-25.49437,0.00000,11.58640,2.78647),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.20636,-0.95313,-0.87478),rotation=(14.67707,-0.00000,14.79298,2.18006),
      children=[
      Shape(
        #  Arc 46.73 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.25411))]),
    Transform(translation=(2.22554,-0.93427,-0.89381),rotation=(14.67707,-0.00000,14.79298,2.18006),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.29802,-0.81019,-0.99953),rotation=(-10.27310,0.00000,-3.54025,0.65845),
      children=[
      Shape(
        #  Arc 46.191 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.17758))]),
    Transform(translation=(2.28383,-0.86651,-0.95833),rotation=(-10.27310,0.00000,-3.54025,0.65845),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.07987,0.41320,1.57529),rotation=(8.79193,-0.00000,2.30914,2.92324),
      children=[
      Shape(
        #  Arc 48.104 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.41963))]),
    Transform(translation=(2.07713,0.36457,1.58573),rotation=(8.79193,-0.00000,2.30914,2.92324),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12403,0.96293,1.65522),rotation=(24.77600,0.00000,-6.52355,0.35564),
      children=[
      Shape(
        #  Arc 48.153 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.73582))]),
    Transform(translation=(2.14246,1.15783,1.72522),rotation=(24.77600,0.00000,-6.52355,0.35564),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.20723,-0.36718,1.94444),rotation=(-0.70241,0.00000,6.43167,2.52320),
      children=[
      Shape(
        #  Arc 49.105 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.11160))]),
    Transform(translation=(2.26728,-0.28227,1.95100),rotation=(-0.70241,0.00000,6.43167,2.52320),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.26703,-0.26269,1.94550),rotation=(-0.49047,0.00000,-5.52787,0.43947),
      children=[
      Shape(
        #  Arc 49.154 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.13044))]),
    Transform(translation=(2.22686,-0.34846,1.94906),rotation=(-0.49047,0.00000,-5.52787,0.43947),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.82113,1.68185,-1.17547),rotation=(24.07420,0.00000,-6.37245,2.56560),
      children=[
      Shape(
        #  Arc 50.139 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.45722))]),
    Transform(translation=(1.83069,1.62430,-1.13934),rotation=(24.07420,0.00000,-6.37245,2.56560),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.61399,-1.87428,0.65875),rotation=(-30.73272,0.00000,-20.56436,2.45316),
      children=[
      Shape(
        #  Arc 52.117 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58203))]),
    Transform(translation=(-1.56769,-1.97545,0.58957),rotation=(-30.73272,0.00000,-20.56436,2.45316),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.30396,-0.35939,1.45541),rotation=(-39.38413,0.00000,14.50757,1.52176),
      children=[
      Shape(
        #  Arc 53.125 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.42022))]),
    Transform(translation=(2.28666,-0.35693,1.40845),rotation=(-39.38413,0.00000,14.50757,1.52176),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.54010,1.00418,1.82613),rotation=(20.30666,0.00000,-20.17138,1.06343),
      children=[
      Shape(
        #  Arc 59.179 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32748))]),
    Transform(translation=(-2.53780,1.00600,1.82844),rotation=(20.30666,0.00000,-20.17138,1.06343),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.37475,-0.88232,0.13482),rotation=(-120.00217,0.00000,34.36418,1.86827),
      children=[
      Shape(
        #  Arc 60.106 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.30560))]),
    Transform(translation=(1.24505,-1.02676,-0.31812),rotation=(-120.00217,0.00000,34.36418,1.86827),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.36754,0.15352,1.87128),rotation=(-22.15048,0.00000,-9.17500,2.73287),
      children=[
      Shape(
        #  Arc 61.172 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.60326))]),
    Transform(translation=(-2.34600,0.02356,1.81928),rotation=(-22.15048,0.00000,-9.17500,2.73287),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.05235,-0.21795,-2.60186),rotation=(-29.93619,0.00000,-0.74697,1.24107),
      children=[
      Shape(
        #  Arc 65.97 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.31651))]),
    Transform(translation=(1.05231,-0.21851,-2.60021),rotation=(-29.93619,0.00000,-0.74697,1.24107),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.05236,-0.21801,-2.60188),rotation=(-29.93914,0.00000,-0.74818,1.24146),
      children=[
      Shape(
        #  Arc 65.128 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.31649))]),
    Transform(translation=(1.05232,-0.21857,-2.60022),rotation=(-29.93914,0.00000,-0.74818,1.24146),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.79330,-2.05877,-0.36215),rotation=(-9.00443,0.00000,4.98782,0.31812),
      children=[
      Shape(
        #  Arc 66.135 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32910))]),
    Transform(translation=(0.79261,-2.05445,-0.36340),rotation=(-9.00443,0.00000,4.98782,0.31812),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.52608,-0.35816,-1.13593),rotation=(17.92549,-0.00000,27.29992,1.78658),
      children=[
      Shape(
        #  Arc 67.98 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.33434))]),
    Transform(translation=(2.52022,-0.35969,-1.13208),rotation=(17.92549,-0.00000,27.29992,1.78658),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.94643,1.87964,1.71754),rotation=(-50.13208,0.00000,13.89113,1.73391),
      children=[
      Shape(
        #  Arc 68.69 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52721))]),
    Transform(translation=(-1.97373,1.86282,1.61903),rotation=(-50.13208,0.00000,13.89113,1.73391),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.05915,1.99353,1.25697),rotation=(-41.98323,0.00000,8.65190,0.93949),
      children=[
      Shape(
        #  Arc 69.113 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.53100))]),
    Transform(translation=(-2.07634,2.05580,1.17355),rotation=(-41.98323,0.00000,8.65190,0.93949),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.11502,1.66896,1.67436),rotation=(41.49490,-0.00000,19.82765,2.20141),
      children=[
      Shape(
        #  Arc 69.116 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.56940))]),
    Transform(translation=(-2.15845,1.59543,1.76523),rotation=(41.49490,-0.00000,19.82765,2.20141),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.07573,-2.62191,-0.04100),rotation=(-1.25652,0.00000,-9.08979,0.37169),
      children=[
      Shape(
        #  Arc 70.143 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.25265))]),
    Transform(translation=(-1.08785,-2.65328,-0.03932),rotation=(-1.25652,0.00000,-9.08979,0.37169),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.94496,0.19878,2.20991),rotation=(-42.94692,0.00000,-9.71426,1.65875),
      children=[
      Shape(
        #  Arc 71.149 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44203))]),
    Transform(translation=(1.95837,0.19342,2.15063),rotation=(-42.94692,0.00000,-9.71426,1.65875),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.10800,1.28712,0.66082),rotation=(81.20736,0.00000,-11.03566,1.80298),
      children=[
      Shape(
        #  Arc 74.171 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.84214))]),
    Transform(translation=(2.14221,1.22704,0.91257),rotation=(81.20736,0.00000,-11.03566,1.80298),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12912,0.71821,-1.08611),rotation=(31.42648,-0.00000,22.18437,2.63211),
      children=[
      Shape(
        #  Arc 75.158 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.78872))]),
    Transform(translation=(2.06321,0.51361,-0.99273),rotation=(31.42648,-0.00000,22.18437,2.63211),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.80694,1.81733,-1.11567),rotation=(10.67001,0.00000,-8.59578,2.72939),
      children=[
      Shape(
        #  Arc 79.108 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34200))]),
    Transform(translation=(1.80970,1.80725,-1.11224),rotation=(10.67001,0.00000,-8.59578,2.72939),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.32557,-0.93855,-0.71637),rotation=(4.56311,-0.00000,3.94387,2.59672),
      children=[
      Shape(
        #  Arc 80.94 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.11636))]),
    Transform(translation=(2.36008,-0.85148,-0.75630),rotation=(4.56311,-0.00000,3.94387,2.59672),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.43997,-1.21981,-1.36179),rotation=(-0.81500,0.00000,-13.88669,2.53358),
      children=[
      Shape(
        #  Arc 81.92 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.24352))]),
    Transform(translation=(-2.46178,-1.18842,-1.36051),rotation=(-0.81500,0.00000,-13.88669,2.53358),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.69164,2.57201,0.86259),rotation=(-13.59055,0.00000,-36.61976,0.84721),
      children=[
      Shape(
        #  Arc 82.138 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52120))]),
    Transform(translation=(-1.62096,2.63861,0.83636),rotation=(-13.59055,0.00000,-36.61976,0.84721),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.87017,2.46493,0.83427),rotation=(-19.25523,0.00000,-0.91315,0.97424),
      children=[
      Shape(
        #  Arc 82.178 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.23302))]),
    Transform(translation=(-1.87188,2.44049,0.87021),rotation=(-19.25523,0.00000,-0.91315,0.97424),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.02806,-0.48799,-2.41068),rotation=(-2.58169,0.00000,0.71119,2.72197),
      children=[
      Shape(
        #  Arc 83.131 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.06573))]),
    Transform(translation=(1.04182,-0.37188,-2.36075),rotation=(-2.58169,0.00000,0.71119,2.72197),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.16938,-0.74925,-0.42420),rotation=(-34.60260,0.00000,-1.57547,2.27059),
      children=[
      Shape(
        #  Arc 84.107 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.45280))]),
    Transform(translation=(2.17169,-0.79202,-0.47494),rotation=(-34.60260,0.00000,-1.57547,2.27059),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.09201,-0.48551,0.07552),rotation=(65.33999,-0.00000,13.89793,1.23141),
      children=[
      Shape(
        #  Arc 84.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.70843))]),
    Transform(translation=(2.05391,-0.42086,0.25465),rotation=(65.33999,-0.00000,13.89793,1.23141),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.93838,1.61340,-0.82028),rotation=(-27.58707,0.00000,3.07565,1.40454),
      children=[
      Shape(
        #  Arc 85.146 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.28146))]),
    Transform(translation=(1.94048,1.61022,-0.80139),rotation=(-27.58707,0.00000,3.07565,1.40454),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.88945,1.10843,2.59100),rotation=(-27.05545,0.00000,17.49597,1.23165),
      children=[
      Shape(
        #  Arc 86.124 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34166))]),
    Transform(translation=(-1.89499,1.11203,2.58242),rotation=(-27.05545,0.00000,17.49597,1.23165),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.80632,-1.01594,-1.54927),rotation=(75.18492,0.00000,-2.37343,2.00968),
      children=[
      Shape(
        #  Arc 87.90 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83098))]),
    Transform(translation=(0.81361,-1.12451,-1.31811),rotation=(75.18492,0.00000,-2.37343,2.00968),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.76826,-1.96776,-0.56272),rotation=(0.00954,-0.00000,0.83351,3.12262),
      children=[
      Shape(
        #  Arc 88.119 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.43948))]),
    Transform(translation=(0.76712,-2.02749,-0.56271),rotation=(0.00954,-0.00000,0.83351,3.12262),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.76826,-1.96776,-0.56272),rotation=(0.00954,-0.00000,0.83351,3.12262),
      children=[
      Shape(
        #  Arc 88.167 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.43948))]),
    Transform(translation=(0.76712,-2.02749,-0.56271),rotation=(0.00954,-0.00000,0.83351,3.12262),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.83779,-1.59491,-0.70733),rotation=(-28.91311,0.00000,-13.07400,0.80309),
      children=[
      Shape(
        #  Arc 88.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.44102))]),
    Transform(translation=(0.85573,-1.55289,-0.74701),rotation=(-28.91311,0.00000,-13.07400,0.80309),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.31293,-0.71864,-1.09537),rotation=(8.89445,0.00000,-0.55809,2.01714),
      children=[
      Shape(
        #  Arc 89.191 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.09880))]),
    Transform(translation=(2.30669,-0.67089,-1.19494),rotation=(8.89445,0.00000,-0.55809,2.01714),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.01056,-1.13308,-0.81926),rotation=(70.81557,0.00000,-38.47508,1.42440),
      children=[
      Shape(
        #  Arc 90.106 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.81464))]),
    Transform(translation=(1.12737,-1.09700,-0.60427),rotation=(70.81557,0.00000,-38.47508,1.42440),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.70510,-1.49047,-1.16428),rotation=(1.81298,-0.00000,22.61631,2.77782),
      children=[
      Shape(
        #  Arc 90.147 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.63768))]),
    Transform(translation=(0.64877,-1.63892,-1.15976),rotation=(1.81298,-0.00000,22.61631,2.77782),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.25695,-2.13863,-0.42996),rotation=(-26.91147,0.00000,35.10756,1.01541),
      children=[
      Shape(
        #  Arc 91.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52060))]),
    Transform(translation=(-1.32459,-2.08575,-0.48181),rotation=(-26.91147,0.00000,35.10756,1.01541),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.43997,-1.21981,-1.36179),rotation=(0.81337,-0.00000,13.88618,0.60799),
      children=[
      Shape(
        #  Arc 92.181 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.24352))]),
    Transform(translation=(-2.41816,-1.25120,-1.36307),rotation=(0.81337,-0.00000,13.88618,0.60799),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.33367,-0.23146,-0.97985),rotation=(21.69489,-0.00000,48.38886,1.97123),
      children=[
      Shape(
        #  Arc 93.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.57585))]),
    Transform(translation=(2.22617,-0.28133,-0.93165),rotation=(21.69489,-0.00000,48.38886,1.97123),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.37446,-1.14990,-0.65065),rotation=(8.58197,0.00000,-13.72211,2.67732),
      children=[
      Shape(
        #  Arc 94.175 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.36145))]),
    Transform(translation=(2.38233,-1.16844,-0.64572),rotation=(8.58197,0.00000,-13.72211,2.67732),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.07292,0.29593,1.56906),rotation=(10.03985,-0.00000,0.91905,2.61921),
      children=[
      Shape(
        #  Arc 96.104 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.20206))]),
    Transform(translation=(2.07560,0.34703,1.53976),rotation=(10.03985,-0.00000,0.91905,2.61921),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.03552,0.28142,1.75701),rotation=(47.63169,-0.00000,8.39758,1.97015),
      children=[
      Shape(
        #  Arc 96.149 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.52497))]),
    Transform(translation=(2.01913,0.24157,1.85000),rotation=(47.63169,-0.00000,8.39758,1.97015),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.13351,0.29271,1.66652),rotation=(29.53224,0.00000,-11.19933,2.09247),
      children=[
      Shape(
        #  Arc 96.155 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.36430))]),
    Transform(translation=(2.14032,0.28168,1.68447),rotation=(29.53224,0.00000,-11.19933,2.09247),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12034,0.78686,1.29286),rotation=(-45.19974,0.00000,-8.56659,0.51826),
      children=[
      Shape(
        #  Arc 96.171 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.92870))]),
    Transform(translation=(2.14842,1.05124,1.14473),rotation=(-45.19974,0.00000,-8.56659,0.51826),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.60464,-0.83979,1.57444),rotation=(-19.88496,0.00000,18.57615,2.27166),
      children=[
      Shape(
        #  Arc 99.100 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.35604))]),
    Transform(translation=(-2.61404,-0.85141,1.56438),rotation=(-19.88496,0.00000,18.57615,2.27166),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.41671,-0.42413,1.71720),rotation=(8.66603,0.00000,-19.00909,0.33417),
      children=[
      Shape(
        #  Arc 99.172 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.63696))]),
    Transform(translation=(-2.36942,-0.27441,1.73876),rotation=(8.66603,0.00000,-19.00909,0.33417),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.30440,-0.53427,-0.38600),rotation=(26.09632,-0.00000,20.11536,1.41839),
      children=[
      Shape(
        #  Arc 103.120 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.33336))]),
    Transform(translation=(2.30037,-0.53325,-0.38077),rotation=(26.09632,-0.00000,20.11536,1.41839),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.43827,-0.61165,-0.56099),rotation=(-8.90133,0.00000,-6.65966,2.32365),
      children=[
      Shape(
        #  Arc 103.157 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.15234))]),
    Transform(translation=(2.40163,-0.55433,-0.51201),rotation=(-8.90133,0.00000,-6.65966,2.32365),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12891,0.20516,1.71672),rotation=(19.49239,0.00000,-12.11839,1.59880),
      children=[
      Shape(
        #  Arc 104.155 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.22961))]),
    Transform(translation=(2.10506,0.20642,1.67835),rotation=(19.49239,0.00000,-12.11839,1.59880),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.65902,-1.39961,-0.38630),rotation=(15.77785,-0.00000,108.78353,2.10610),
      children=[
      Shape(
        #  Arc 106.133 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=1.27799))]),
    Transform(translation=(0.25129,-1.64395,-0.32716),rotation=(15.77785,-0.00000,108.78353,2.10610),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.27579,-0.87502,-0.80718),rotation=(-68.39954,0.00000,-14.57058,1.05419),
      children=[
      Shape(
        #  Arc 106.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.80430))]),
    Transform(translation=(1.31965,-0.75542,-1.01311),rotation=(-68.39954,0.00000,-14.57058,1.05419),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.02783,-0.88956,-0.80750),rotation=(-42.05868,0.00000,29.88594,1.54944),
      children=[
      Shape(
        #  Arc 107.187 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.51607))]),
    Transform(translation=(1.97105,-0.88746,-0.88740),rotation=(-42.05868,0.00000,29.88594,1.54944),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.88646,1.64867,-1.01027),rotation=(10.41043,0.00000,-7.30806,1.75695),
      children=[
      Shape(
        #  Arc 108.146 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.12943))]),
    Transform(translation=(1.83266,1.66631,-1.08691),rotation=(10.41043,0.00000,-7.30806,1.75695),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.59741,-2.52060,-0.11471),rotation=(-4.01181,0.00000,-15.41998,0.33078),
      children=[
      Shape(
        #  Arc 110.129 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.49058))]),
    Transform(translation=(-0.57060,-2.43993,-0.12169),rotation=(-4.01181,0.00000,-15.41998,0.33078),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.87689,1.54147,-1.07814),rotation=(4.60909,-0.00000,4.78084,2.56760),
      children=[
      Shape(
        #  Arc 112.139 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.12230))]),
    Transform(translation=(1.91554,1.62448,-1.11539),rotation=(4.60909,-0.00000,4.78084,2.56760),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.99099,-0.44326,-0.92316),rotation=(10.35804,0.00000,-20.14616,0.84970),
      children=[
      Shape(
        #  Arc 115.121 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.30160))]),
    Transform(translation=(1.98485,-0.44933,-0.92632),rotation=(10.35804,0.00000,-20.14616,0.84970),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.61945,-0.60960,-1.06207),rotation=(-17.42295,0.00000,54.16201,1.80139),
      children=[
      Shape(
        #  Arc 115.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58442))]),
    Transform(translation=(1.49692,-0.63982,-1.10148),rotation=(-17.42295,0.00000,54.16201,1.80139),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.81554,1.56598,2.40960),rotation=(-23.44312,0.00000,31.02795,1.88843),
      children=[
      Shape(
        #  Arc 118.176 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.40936))]),
    Transform(translation=(-1.84940,1.55202,2.38401),rotation=(-23.44312,0.00000,31.02795,1.88843),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.11317,-0.43828,0.07335),rotation=(65.77366,-0.00000,18.12991,1.36648),
      children=[
      Shape(
        #  Arc 120.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.69676))]),
    Transform(translation=(2.06416,-0.40006,0.25118),rotation=(65.77366,-0.00000,18.12991,1.36648),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.05496,0.01512,-0.90017),rotation=(-5.76026,0.00000,7.35180,0.12942),
      children=[
      Shape(
        #  Arc 121.158 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.72368))]),
    Transform(translation=(2.03446,0.21527,-0.91624),rotation=(-5.76026,0.00000,7.35180,0.12942),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.76704,-0.68452,-2.52585),rotation=(24.83563,0.00000,-15.06367,1.08100),
      children=[
      Shape(
        #  Arc 123.150 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32917))]),
    Transform(translation=(0.76914,-0.68236,-2.52240),rotation=(24.83563,0.00000,-15.06367,1.08100),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.88960,1.10814,2.59096),rotation=(27.04902,0.00000,-17.46440,1.91174),
      children=[
      Shape(
        #  Arc 124.144 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34164))]),
    Transform(translation=(-1.88407,1.10452,2.59953),rotation=(27.04902,0.00000,-17.46440,1.91174),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.12697,-0.35834,0.83036),rotation=(-85.62771,0.00000,20.88958,1.59179),
      children=[
      Shape(
        #  Arc 125.195 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.88158))]),
    Transform(translation=(2.06044,-0.36424,0.55762),rotation=(-85.62771,0.00000,20.88958,1.59179),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-0.20260,-2.00709,-0.22109),rotation=(-17.26377,0.00000,-63.54055,0.86334),
      children=[
      Shape(
        #  Arc 129.133 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.86635))]),
    Transform(translation=(-0.00225,-1.82955,-0.27552),rotation=(-17.26377,0.00000,-63.54055,0.86334),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.00754,-0.58936,-2.57594),rotation=(30.46978,0.00000,-3.39305,1.13513),
      children=[
      Shape(
        #  Arc 130.131 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.33817))]),
    Transform(translation=(1.00845,-0.58552,-2.56776),rotation=(30.46978,0.00000,-3.39305,1.13513),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.62798,-0.77082,-1.17224),rotation=(4.61108,-0.00000,55.86878,1.24583),
      children=[
      Shape(
        #  Arc 132.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.59155))]),
    Transform(translation=(1.49975,-0.72747,-1.16165),rotation=(4.61108,-0.00000,55.86878,1.24583),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.03404,-1.02484,-1.27322),rotation=(-15.58521,0.00000,-25.34222,2.39131),
      children=[
      Shape(
        #  Arc 132.183 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.43633))]),
    Transform(translation=(2.06782,-1.06739,-1.29399),rotation=(-15.58521,0.00000,-25.34222,2.39131),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.31503,-1.75399,-0.36756),rotation=(-12.03038,0.00000,-39.98731,1.70608),
      children=[
      Shape(
        #  Arc 133.163 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.42143))]),
    Transform(translation=(0.36315,-1.76083,-0.38204),rotation=(-12.03038,0.00000,-39.98731,1.70608),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.33413,-1.20011,1.85258),rotation=(17.55873,0.00000,-9.73380,2.25042),
      children=[
      Shape(
        #  Arc 134.182 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.25811))]),
    Transform(translation=(-2.34579,-1.18066,1.83153),rotation=(17.55873,0.00000,-9.73380,2.25042),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.43748,-2.17913,-0.50736),rotation=(-11.43044,0.00000,-0.99793,0.31220),
      children=[
      Shape(
        #  Arc 141.168 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.37356))]),
    Transform(translation=(-1.43677,-2.15365,-0.51556),rotation=(-11.43044,0.00000,-0.99793,0.31220),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(0.76694,-0.68447,-2.52584),rotation=(-24.83226,0.00000,15.08484,2.06020),
      children=[
      Shape(
        #  Arc 150.173 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.32919))]),
    Transform(translation=(0.76483,-0.68663,-2.52931),rotation=(-24.83226,0.00000,15.08484,2.06020),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.15425,2.27198,0.26789),rotation=(30.76594,0.00000,-5.79701,1.47189),
      children=[
      Shape(
        #  Arc 151.160 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.31461))]),
    Transform(translation=(-2.15474,2.27172,0.26526),rotation=(30.76594,0.00000,-5.79701,1.47189),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.30577,-0.13963,1.93267),rotation=(-2.07431,0.00000,-2.21975,0.23292),
      children=[
      Shape(
        #  Arc 154.156 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.13162))]),
    Transform(translation=(2.28988,-0.23128,1.94752),rotation=(-2.07431,0.00000,-2.21975,0.23292),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(2.61181,-0.74812,-0.54868),rotation=(11.36331,0.00000,-28.04804,2.07957),
      children=[
      Shape(
        #  Arc 157.185 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.34651))]),
    Transform(translation=(2.62254,-0.75458,-0.54433),rotation=(11.36331,0.00000,-28.04804,2.07957),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-2.15425,2.27198,0.26789),rotation=(-30.76601,0.00000,5.79680,1.66970),
      children=[
      Shape(
        #  Arc 160.189 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.31461))]),
    Transform(translation=(-2.15375,2.27225,0.27053),rotation=(-30.76601,0.00000,5.79680,1.66970),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.33898,-0.26739,-1.38493),rotation=(47.15007,0.00000,-1.93167,2.61834),
      children=[
      Shape(
        #  Arc 166.169 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.94435))]),
    Transform(translation=(1.34537,-0.53780,-1.22907),rotation=(47.15007,0.00000,-1.93167,2.61834),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.24607,-0.08626,-1.74839),rotation=(-25.54145,0.00000,16.65144,2.55195),
      children=[
      Shape(
        #  Arc 166.184 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.54832))]),
    Transform(translation=(1.21140,-0.18114,-1.80157),rotation=(-25.54145,0.00000,16.65144,2.55195),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(-1.70027,-1.94401,-0.79332),rotation=(-45.76106,0.00000,53.55540,1.40931),
      children=[
      Shape(
        #  Arc 168.174 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.71372))]),
    Transform(translation=(-1.84799,-1.91235,-0.91954),rotation=(-45.76106,0.00000,53.55540,1.40931),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.12590,-1.05908,-1.00054),rotation=(29.72814,-0.00000,44.54756,2.53105),
      children=[
      Shape(
        #  Arc 169.180 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.93415))]),
    Transform(translation=(0.97946,-1.31068,-0.90282),rotation=(29.72814,-0.00000,44.54756,2.53105),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.25572,-0.49525,-1.51264),rotation=(-72.69152,0.00000,18.58311,1.12097),
      children=[
      Shape(
        #  Arc 169.184 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.83317))]),
    Transform(translation=(1.19849,-0.38369,-1.73650),rotation=(-72.69152,0.00000,18.58311,1.12097),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(translation=(1.61352,-0.78022,-1.08349),rotation=(13.13861,0.00000,-52.97589,1.93435),
      children=[
      Shape(
        #  Arc 169.187 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(radius=0.02000,height=0.58398))]),
    Transform(translation=(1.73325,-0.82715,-1.05379),rotation=(13.13861,0.00000,-52.97589,1.93435),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Anchor(description='1: 2010-02-12-AFSC.ORG',
      children=[
      Transform(translation=(1.06294,-0.41784,-1.93056),
        children=[
        Shape(
          #  Vertex 1 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.21294,-0.41784,-1.93056),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-AFSC.ORG'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='2: 2010-02-12-ARMY.MIL',
      children=[
      Transform(translation=(1.84884,1.20265,-0.90297),
        children=[
        Shape(
          #  Vertex 2 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.99884,1.20265,-0.90297),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-ARMY.MIL'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='3: 2010-02-12-BLOGS.STATE.GOV-INDEX.PHP',
      children=[
      Transform(translation=(-2.08595,1.27140,2.04273),
        children=[
        Shape(
          #  Vertex 3 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.93595,1.27140,2.04273),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-BLOGS.STATE.GOV-INDEX.PHP'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='4: 2010-02-12-FACEBOOK.COM-JTFHAITI',
      children=[
      Transform(translation=(2.09413,1.14777,1.20942),
        children=[
        Shape(
          #  Vertex 4 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.24413,1.14777,1.20942),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-FACEBOOK.COM-JTFHAITI'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='5: 2010-02-12-FLICKR.COM-PHOTOS',
      children=[
      Transform(translation=(-2.32221,-0.86170,1.53483),
        children=[
        Shape(
          #  Vertex 5 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.17221,-0.86170,1.53483),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-FLICKR.COM-PHOTOS'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='6: 2010-02-12-GLOBALFOODFORTHOUGHT.TYPEPAD.COM-GLOBAL',
      children=[
      Transform(translation=(-1.67976,1.42235,-2.39503),
        children=[
        Shape(
          #  Vertex 6 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.52976,1.42235,-2.39503),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-GLOBALFOODFORTHOUGHT.TYPEPAD.COM-GLOBAL'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='7: 2010-02-12-HELPAGEUSA.ORG',
      children=[
      Transform(translation=(1.97196,-0.54660,-0.74872),
        children=[
        Shape(
          #  Vertex 7 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.12196,-0.54660,-0.74872),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-HELPAGEUSA.ORG'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='8: 2010-02-12-HHS.GOV-HAITI',
      children=[
      Transform(translation=(0.83576,-1.37789,-0.52388),
        children=[
        Shape(
          #  Vertex 8 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.98576,-1.37789,-0.52388),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-HHS.GOV-HAITI'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='9: 2010-02-12-SOUTHCOM.MIL-APPSSC',
      children=[
      Transform(translation=(2.00862,-0.11253,1.59254),
        children=[
        Shape(
          #  Vertex 9 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.15862,-0.11253,1.59254),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-SOUTHCOM.MIL-APPSSC'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='10: 2010-02-12-STOPHUNGERNOW.ORG-SITE',
      children=[
      Transform(translation=(-0.84639,-2.16638,-0.06134),
        children=[
        Shape(
          #  Vertex 10 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.69639,-2.16638,-0.06134),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-STOPHUNGERNOW.ORG-SITE'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='11: 2010-02-12-TWITTER.COM-USHAHIDI',
      children=[
      Transform(translation=(-2.13033,-1.43167,-1.30965),
        children=[
        Shape(
          #  Vertex 11 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.98033,-1.43167,-1.30965),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-TWITTER.COM-USHAHIDI'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='12: 2010-02-12-WASHINGTONPOST.COM-WP',
      children=[
      Transform(translation=(-1.95455,2.25579,0.83918),
        children=[
        Shape(
          #  Vertex 12 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.80455,2.25579,0.83918),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-02-12-WASHINGTONPOST.COM-WP'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='13: Haiti/2010-02-12/Association_prob_NONE_Haiti_Cat5.txt.file.2010-02-12.simple',
      children=[
      Transform(translation=(-1.05652,2.28950,-2.07618),
        children=[
        Shape(
          #  Vertex 13 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.6000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.90652,2.28950,-2.07618),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['Haiti/2010-02-12/Association_prob_NONE_Haiti_Cat5.txt.file.2010-02-12.simple'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='14: added',
      children=[
      Transform(translation=(1.96230,1.89417,1.55165),
        children=[
        Shape(
          #  Vertex 14 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.11230,1.89417,1.55165),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['added'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='15: affairs',
      children=[
      Transform(translation=(-2.50959,-0.72675,1.67739),
        children=[
        Shape(
          #  Vertex 15 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.35959,-0.72675,1.67739),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['affairs'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='16: affected',
      children=[
      Transform(translation=(2.32425,-0.34544,-1.00602),
        children=[
        Shape(
          #  Vertex 16 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.47425,-0.34544,-1.00602),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['affected'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='17: afghan',
      children=[
      Transform(translation=(-1.91770,2.46408,0.44787),
        children=[
        Shape(
          #  Vertex 17 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.76770,2.46408,0.44787),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['afghan'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='18: africa',
      children=[
      Transform(translation=(-2.09656,1.76971,1.41452),
        children=[
        Shape(
          #  Vertex 18 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.94656,1.76971,1.41452),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['africa'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='19: aid',
      children=[
      Transform(translation=(2.37845,-0.32844,1.79618),
        children=[
        Shape(
          #  Vertex 19 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.52845,-0.32844,1.79618),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['aid'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='20: air',
      children=[
      Transform(translation=(1.99117,1.39129,-0.09874),
        children=[
        Shape(
          #  Vertex 20 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.14117,1.39129,-0.09874),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['air'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='21: airman',
      children=[
      Transform(translation=(2.24005,1.06248,-1.24324),
        children=[
        Shape(
          #  Vertex 21 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.39005,1.06248,-1.24324),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['airman'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='22: americas',
      children=[
      Transform(translation=(-1.95607,2.02958,1.49935),
        children=[
        Shape(
          #  Vertex 22 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.80607,2.02958,1.49935),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['americas'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='23: annie',
      children=[
      Transform(translation=(-1.54295,2.75259,0.44873),
        children=[
        Shape(
          #  Vertex 23 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.39295,2.75259,0.44873),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['annie'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='24: annual',
      children=[
      Transform(translation=(-0.60743,-2.17810,-0.20947),
        children=[
        Shape(
          #  Vertex 24 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.45743,-2.17810,-0.20947),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['annual'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='25: approach',
      children=[
      Transform(translation=(0.62108,0.07188,-2.64485),
        children=[
        Shape(
          #  Vertex 25 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.77108,0.07188,-2.64485),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['approach'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='26: army',
      children=[
      Transform(translation=(2.09790,0.39933,2.20380),
        children=[
        Shape(
          #  Vertex 26 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.24790,0.39933,2.20380),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['army'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='27: ashore',
      children=[
      Transform(translation=(1.87328,-0.46117,2.36522),
        children=[
        Shape(
          #  Vertex 27 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.02328,-0.46117,2.36522),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['ashore'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='28: asia',
      children=[
      Transform(translation=(-2.16048,1.24253,2.05751),
        children=[
        Shape(
          #  Vertex 28 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.01048,1.24253,2.05751),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['asia'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='29: assist',
      children=[
      Transform(translation=(1.81715,-0.55909,1.46570),
        children=[
        Shape(
          #  Vertex 29 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.96715,-0.55909,1.46570),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['assist'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='30: athletes',
      children=[
      Transform(translation=(-1.43142,-2.52868,0.18610),
        children=[
        Shape(
          #  Vertex 30 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.28142,-2.52868,0.18610),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['athletes'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='31: banker',
      children=[
      Transform(translation=(-1.75154,2.42361,1.30055),
        children=[
        Shape(
          #  Vertex 31 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.60154,2.42361,1.30055),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['banker'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='32: bear',
      children=[
      Transform(translation=(-1.79769,2.56007,0.62108),
        children=[
        Shape(
          #  Vertex 32 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.64769,2.56007,0.62108),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['bear'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='33: brigade',
      children=[
      Transform(translation=(2.11846,1.60231,1.38765),
        children=[
        Shape(
          #  Vertex 33 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.26846,1.60231,1.38765),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['brigade'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='34: ca',
      children=[
      Transform(translation=(-2.18642,-1.50098,1.27781),
        children=[
        Shape(
          #  Vertex 34 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.03642,-1.50098,1.27781),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['ca'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='35: call',
      children=[
      Transform(translation=(2.26737,0.13004,1.83081),
        children=[
        Shape(
          #  Vertex 35 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.41737,0.13004,1.83081),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['call'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='36: care',
      children=[
      Transform(translation=(1.81448,-1.03280,-0.64009),
        children=[
        Shape(
          #  Vertex 36 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.96448,-1.03280,-0.64009),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['care'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='37: cargo',
      children=[
      Transform(translation=(1.97777,-0.22301,1.84412),
        children=[
        Shape(
          #  Vertex 37 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.12777,-0.22301,1.84412),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['cargo'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='38: causeway',
      children=[
      Transform(translation=(1.77630,-0.11941,2.48998),
        children=[
        Shape(
          #  Vertex 38 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.92630,-0.11941,2.48998),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['causeway'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='39: central',
      children=[
      Transform(translation=(-2.30041,1.14640,2.17720),
        children=[
        Shape(
          #  Vertex 39 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.15041,1.14640,2.17720),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['central'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='40: challenges',
      children=[
      Transform(translation=(2.49547,-0.81646,-1.39157),
        children=[
        Shape(
          #  Vertex 40 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.64547,-0.81646,-1.39157),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['challenges'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='41: channels',
      children=[
      Transform(translation=(-2.14435,1.56219,1.95876),
        children=[
        Shape(
          #  Vertex 41 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.99435,1.56219,1.95876),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['channels'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='42: chief',
      children=[
      Transform(translation=(2.13628,-0.45492,1.93412),
        children=[
        Shape(
          #  Vertex 42 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.28628,-0.45492,1.93412),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['chief'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='43: citrus',
      children=[
      Transform(translation=(-1.11450,-2.61513,0.50750),
        children=[
        Shape(
          #  Vertex 43 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.96450,-2.61513,0.50750),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['citrus'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='44: civil',
      children=[
      Transform(translation=(-2.69056,-0.96365,1.48588),
        children=[
        Shape(
          #  Vertex 44 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.54056,-0.96365,1.48588),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['civil'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='45: clark',
      children=[
      Transform(translation=(2.19338,1.13863,1.77380),
        children=[
        Shape(
          #  Vertex 45 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.34338,1.13863,1.77380),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['clark'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='46: clean',
      children=[
      Transform(translation=(2.28032,-0.88042,-0.94816),
        children=[
        Shape(
          #  Vertex 46 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.43032,-0.88042,-0.94816),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['clean'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='47: club',
      children=[
      Transform(translation=(-1.11450,-2.61513,0.50750),
        children=[
        Shape(
          #  Vertex 47 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.96450,-2.61513,0.50750),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['club'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='48: command',
      children=[
      Transform(translation=(2.09141,0.61804,1.53134),
        children=[
        Shape(
          #  Vertex 48 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.24141,0.61804,1.53134),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['command'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='49: communication',
      children=[
      Transform(translation=(2.23939,-0.32171,1.94795),
        children=[
        Shape(
          #  Vertex 49 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.38939,-0.32171,1.94795),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['communication'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='50: count',
      children=[
      Transform(translation=(1.78927,1.87357,-1.29584),
        children=[
        Shape(
          #  Vertex 50 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.93927,1.87357,-1.29584),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['count'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='51: countries',
      children=[
      Transform(translation=(-1.79683,1.96529,2.00815),
        children=[
        Shape(
          #  Vertex 51 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.64683,1.96529,2.00815),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['countries'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='52: county',
      children=[
      Transform(translation=(-1.71681,-1.64954,0.81241),
        children=[
        Shape(
          #  Vertex 52 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.56681,-1.64954,0.81241),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['county'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='53: critical',
      children=[
      Transform(translation=(2.37649,-0.36969,1.65234),
        children=[
        Shape(
          #  Vertex 53 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.52649,-0.36969,1.65234),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['critical'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='54: crony',
      children=[
      Transform(translation=(-1.81902,2.56904,0.15563),
        children=[
        Shape(
          #  Vertex 54 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.66902,2.56904,0.15563),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['crony'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='55: cross',
      children=[
      Transform(translation=(-1.89585,2.51350,0.61986),
        children=[
        Shape(
          #  Vertex 55 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.74585,2.51350,0.61986),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['cross'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='56: delicious',
      children=[
      Transform(translation=(-1.54913,1.55497,-2.41194),
        children=[
        Shape(
          #  Vertex 56 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.39913,1.55497,-2.41194),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['delicious'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='57: deploying',
      children=[
      Transform(translation=(1.65378,-0.25505,2.51029),
        children=[
        Shape(
          #  Vertex 57 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.80378,-0.25505,2.51029),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['deploying'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='58: devastating',
      children=[
      Transform(translation=(1.75463,0.25973,-1.09870),
        children=[
        Shape(
          #  Vertex 58 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.90463,0.25973,-1.09870),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['devastating'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='59: diary',
      children=[
      Transform(translation=(-2.64096,0.92462,1.72459),
        children=[
        Shape(
          #  Vertex 59 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.49096,0.92462,1.72459),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['diary'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='60: disaster',
      children=[
      Transform(translation=(1.54658,-0.69098,0.73484),
        children=[
        Shape(
          #  Vertex 60 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.69658,-0.69098,0.73484),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['disaster'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='61: dominates',
      children=[
      Transform(translation=(-2.41342,0.43030,1.98203),
        children=[
        Shape(
          #  Vertex 61 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.26342,0.43030,1.98203),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dominates'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='62: donate',
      children=[
      Transform(translation=(0.62108,0.07188,-2.64485),
        children=[
        Shape(
          #  Vertex 62 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.77108,0.07188,-2.64485),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['donate'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='63: dragon',
      children=[
      Transform(translation=(1.55573,1.95624,-1.29421),
        children=[
        Shape(
          #  Vertex 63 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.70573,1.95624,-1.29421),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['dragon'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='64: east',
      children=[
      Transform(translation=(-2.27167,1.44434,1.83608),
        children=[
        Shape(
          #  Vertex 64 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.12167,1.44434,1.83608),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['east'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='65: economic',
      children=[
      Transform(translation=(1.04862,-0.26919,-2.45218),
        children=[
        Shape(
          #  Vertex 65 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.19862,-0.26919,-2.45218),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['economic'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='66: emergency',
      children=[
      Transform(translation=(0.81824,-2.21507,-0.31713),
        children=[
        Shape(
          #  Vertex 66 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.96824,-2.21507,-0.31713),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['emergency'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='67: estimated',
      children=[
      Transform(translation=(2.66258,-0.32236,-1.22555),
        children=[
        Shape(
          #  Vertex 67 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.81258,-0.32236,-1.22555),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['estimated'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='68: eurasia',
      children=[
      Transform(translation=(-1.87698,1.92245,1.96820),
        children=[
        Shape(
          #  Vertex 68 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.72698,1.92245,1.96820),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['eurasia'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='69: europe',
      children=[
      Transform(translation=(-2.01589,1.83683,1.46688),
        children=[
        Shape(
          #  Vertex 69 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.86589,1.83683,1.46688),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['europe'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='70: event',
      children=[
      Transform(translation=(-1.12118,-2.73961,-0.03472),
        children=[
        Shape(
          #  Vertex 70 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.97118,-2.73961,-0.03472),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['event'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='71: fact',
      children=[
      Transform(translation=(1.89639,0.21819,2.42464),
        children=[
        Shape(
          #  Vertex 71 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.04639,0.21819,2.42464),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['fact'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='72: feeds',
      children=[
      Transform(translation=(-1.81395,2.57281,0.15843),
        children=[
        Shape(
          #  Vertex 72 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.66395,2.57281,0.15843),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['feeds'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='73: food',
      children=[
      Transform(translation=(2.13239,-1.02584,-0.80139),
        children=[
        Shape(
          #  Vertex 73 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.28239,-1.02584,-0.80139),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['food'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='74: force',
      children=[
      Transform(translation=(2.05282,1.38401,0.25479),
        children=[
        Shape(
          #  Vertex 74 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.20282,1.38401,0.25479),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['force'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='75: formation',
      children=[
      Transform(translation=(2.24005,1.06248,-1.24324),
        children=[
        Shape(
          #  Vertex 75 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.39005,1.06248,-1.24324),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['formation'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='76: fort',
      children=[
      Transform(translation=(2.06920,1.86413,1.49490),
        children=[
        Shape(
          #  Vertex 76 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.21920,1.86413,1.49490),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['fort'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='77: funding',
      children=[
      Transform(translation=(0.85327,0.12496,-2.68100),
        children=[
        Shape(
          #  Vertex 77 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.00327,0.12496,-2.68100),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['funding'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='78: games',
      children=[
      Transform(translation=(-1.92990,0.74771,2.67954),
        children=[
        Shape(
          #  Vertex 78 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.77990,0.74771,2.67954),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['games'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='79: gathered',
      children=[
      Transform(translation=(1.76396,1.97400,-1.16902),
        children=[
        Shape(
          #  Vertex 79 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.91396,1.97400,-1.16902),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['gathered'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='80: government',
      children=[
      Transform(translation=(2.34529,-0.88879,-0.73919),
        children=[
        Shape(
          #  Vertex 80 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.49529,-0.88879,-0.73919),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['government'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='81: graphic',
      children=[
      Transform(translation=(-2.50941,-1.11987,-1.35771),
        children=[
        Shape(
          #  Vertex 81 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.35941,-1.11987,-1.35771),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['graphic'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='82: greek',
      children=[
      Transform(translation=(-1.87474,2.39947,0.93055),
        children=[
        Shape(
          #  Vertex 82 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.72474,2.39947,0.93055),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['greek'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='83: haitians',
      children=[
      Transform(translation=(1.03162,-0.45797,-2.39778),
        children=[
        Shape(
          #  Vertex 83 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.18162,-0.45797,-2.39778),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['haitians'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='84: hard',
      children=[
      Transform(translation=(2.16150,-0.60344,-0.25118),
        children=[
        Shape(
          #  Vertex 84 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.31150,-0.60344,-0.25118),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hard'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='85: held',
      children=[
      Transform(translation=(1.95375,1.59011,-0.68235),
        children=[
        Shape(
          #  Vertex 85 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.10375,1.59011,-0.68235),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['held'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='86: hemisphere',
      children=[
      Transform(translation=(-1.80197,1.05159,2.72627),
        children=[
        Shape(
          #  Vertex 86 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.65197,1.05159,2.72627),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hemisphere'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='87: hit',
      children=[
      Transform(translation=(0.79445,-0.83939,-1.92519),
        children=[
        Shape(
          #  Vertex 87 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.94445,-0.83939,-1.92519),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hit'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='88: hospitals',
      children=[
      Transform(translation=(0.77242,-1.74806,-0.56277),
        children=[
        Shape(
          #  Vertex 88 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.92242,-1.74806,-0.56277),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hospitals'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='89: huge',
      children=[
      Transform(translation=(2.31014,-0.69731,-1.13984),
        children=[
        Shape(
          #  Vertex 89 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.46014,-0.69731,-1.13984),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['huge'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='90: humanitarian',
      children=[
      Transform(translation=(0.81818,-1.19250,-1.17334),
        children=[
        Shape(
          #  Vertex 90 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.96818,-1.19250,-1.17334),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['humanitarian'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='91: hunger',
      children=[
      Transform(translation=(-1.08142,-2.27588,-0.29540),
        children=[
        Shape(
          #  Vertex 91 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.93142,-2.27588,-0.29540),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['hunger'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='92: info',
      children=[
      Transform(translation=(-2.37054,-1.31975,-1.36586),
        children=[
        Shape(
          #  Vertex 92 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.22054,-1.31975,-1.36586),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['info'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='93: injured',
      children=[
      Transform(translation=(2.57561,-0.11922,-1.08832),
        children=[
        Shape(
          #  Vertex 93 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.72561,-0.11922,-1.08832),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['injured'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='94: issued',
      children=[
      Transform(translation=(2.30585,-0.98831,-0.69356),
        children=[
        Shape(
          #  Vertex 94 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.45585,-0.98831,-0.69356),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['issued'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='95: issues',
      children=[
      Transform(translation=(-1.52680,1.49375,2.65061),
        children=[
        Shape(
          #  Vertex 95 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.37680,1.49375,2.65061),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['issues'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='96: joint',
      children=[
      Transform(translation=(2.07751,0.38348,1.51886),
        children=[
        Shape(
          #  Vertex 96 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.22751,0.38348,1.51886),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['joint'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='97: justice',
      children=[
      Transform(translation=(1.05609,-0.16671,-2.75154),
        children=[
        Shape(
          #  Vertex 97 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.20609,-0.16671,-2.75154),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['justice'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='98: latest',
      children=[
      Transform(translation=(2.38958,-0.39395,-1.04630),
        children=[
        Shape(
          #  Vertex 98 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.53958,-0.39395,-1.04630),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['latest'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='99: leader',
      children=[
      Transform(translation=(-2.51176,-0.72499,1.67387),
        children=[
        Shape(
          #  Vertex 99 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.36176,-0.72499,1.67387),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['leader'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='100: left',
      children=[
      Transform(translation=(-2.69752,-0.95459,1.47502),
        children=[
        Shape(
          #  Vertex 100 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.54752,-0.95459,1.47502),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['left'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='101: lent',
      children=[
      Transform(translation=(-0.89390,-2.70276,0.50073),
        children=[
        Shape(
          #  Vertex 101 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.74390,-2.70276,0.50073),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['lent'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='102: links',
      children=[
      Transform(translation=(1.92326,1.59934,-1.09407),
        children=[
        Shape(
          #  Vertex 102 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.07326,1.59934,-1.09407),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['links'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='103: local',
      children=[
      Transform(translation=(2.40498,-0.55957,-0.51648),
        children=[
        Shape(
          #  Vertex 103 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.55498,-0.55957,-0.51648),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['local'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='104: logistics',
      children=[
      Transform(translation=(2.06832,0.20837,1.61925),
        children=[
        Shape(
          #  Vertex 104 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.21832,0.20837,1.61925),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['logistics'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='105: mass',
      children=[
      Transform(translation=(2.17507,-0.41264,1.94093),
        children=[
        Shape(
          #  Vertex 105 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.32507,-0.41264,1.94093),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['mass'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='106: medical',
      children=[
      Transform(translation=(1.20293,-1.07366,-0.46519),
        children=[
        Shape(
          #  Vertex 106 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.35293,-1.07366,-0.46519),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['medical'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='107: meet',
      children=[
      Transform(translation=(2.17726,-0.89507,-0.59721),
        children=[
        Shape(
          #  Vertex 107 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.32726,-0.89507,-0.59721),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['meet'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='108: memorial',
      children=[
      Transform(translation=(1.84992,1.66065,-1.06232),
        children=[
        Shape(
          #  Vertex 108 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.99992,1.66065,-1.06232),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['memorial'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='109: mission',
      children=[
      Transform(translation=(1.58345,2.01991,-1.15219),
        children=[
        Shape(
          #  Vertex 109 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.73345,2.01991,-1.15219),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['mission'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='110: money',
      children=[
      Transform(translation=(-0.67451,-2.75259,-0.09465),
        children=[
        Shape(
          #  Vertex 110 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.52451,-2.75259,-0.09465),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['money'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='111: move',
      children=[
      Transform(translation=(1.86400,-0.42789,2.37782),
        children=[
        Shape(
          #  Vertex 111 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.01400,-0.42789,2.37782),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['move'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='112: nation',
      children=[
      Transform(translation=(1.90080,1.59282,-1.10119),
        children=[
        Shape(
          #  Vertex 112 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.05080,1.59282,-1.10119),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['nation'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='113: news',
      children=[
      Transform(translation=(-2.10241,2.15023,1.04705),
        children=[
        Shape(
          #  Vertex 113 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.95241,2.15023,1.04705),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['news'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='114: offload',
      children=[
      Transform(translation=(1.88435,-0.17434,2.10395),
        children=[
        Shape(
          #  Vertex 114 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.03435,-0.17434,2.10395),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['offload'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='115: older',
      children=[
      Transform(translation=(1.89026,-0.54282,-0.97495),
        children=[
        Shape(
          #  Vertex 115 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.04026,-0.54282,-0.97495),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['older'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='116: pacific',
      children=[
      Transform(translation=(-2.21416,1.50109,1.88183),
        children=[
        Shape(
          #  Vertex 116 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.06416,1.50109,1.88183),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['pacific'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='117: packaging',
      children=[
      Transform(translation=(-1.51116,-2.09901,0.50509),
        children=[
        Shape(
          #  Vertex 117 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.36116,-2.09901,0.50509),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['packaging'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='118: pages',
      children=[
      Transform(translation=(-1.66040,1.62990,2.52682),
        children=[
        Shape(
          #  Vertex 118 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.51040,1.62990,2.52682),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['pages'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='119: part',
      children=[
      Transform(translation=(0.76409,-2.18746,-0.56267),
        children=[
        Shape(
          #  Vertex 119 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.91409,-2.18746,-0.56267),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['part'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='120: partners',
      children=[
      Transform(translation=(2.20382,-0.50896,-0.25552),
        children=[
        Shape(
          #  Vertex 120 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.35382,-0.50896,-0.25552),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['partners'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='121: people',
      children=[
      Transform(translation=(2.09172,-0.34370,-0.87137),
        children=[
        Shape(
          #  Vertex 121 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.24172,-0.34370,-0.87137),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['people'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='122: personnel',
      children=[
      Transform(translation=(-2.75205,-1.02455,1.12481),
        children=[
        Shape(
          #  Vertex 122 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.60205,-1.02455,1.12481),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['personnel'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='123: plastic',
      children=[
      Transform(translation=(0.69172,-0.76195,-2.65003),
        children=[
        Shape(
          #  Vertex 123 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.84172,-0.76195,-2.65003),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['plastic'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='124: policy',
      children=[
      Transform(translation=(-1.97693,1.16526,2.45572),
        children=[
        Shape(
          #  Vertex 124 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.82693,1.16526,2.45572),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['policy'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='125: port',
      children=[
      Transform(translation=(2.23142,-0.34909,1.25849),
        children=[
        Shape(
          #  Vertex 125 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.38142,-0.34909,1.25849),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['port'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='126: post',
      children=[
      Transform(translation=(-2.36423,-0.99236,-1.67270),
        children=[
        Shape(
          #  Vertex 126 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.21423,-0.99236,-1.67270),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['post'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='127: project',
      children=[
      Transform(translation=(-2.13534,-1.24151,-1.84598),
        children=[
        Shape(
          #  Vertex 127 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.98534,-1.24151,-1.84598),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['project'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='128: racial',
      children=[
      Transform(translation=(1.05610,-0.16683,-2.75157),
        children=[
        Shape(
          #  Vertex 128 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.20610,-0.16683,-2.75157),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['racial'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='129: raise',
      children=[
      Transform(translation=(-0.52031,-2.28861,-0.13477),
        children=[
        Shape(
          #  Vertex 129 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.37031,-2.28861,-0.13477),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['raise'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='130: rebuild',
      children=[
      Transform(translation=(0.99057,-0.66071,-2.72829),
        children=[
        Shape(
          #  Vertex 130 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.14057,-0.66071,-2.72829),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rebuild'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='131: recover',
      children=[
      Transform(translation=(1.02450,-0.51800,-2.42359),
        children=[
        Shape(
          #  Vertex 131 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.17450,-0.51800,-2.42359),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['recover'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='132: remain',
      children=[
      Transform(translation=(1.90733,-0.86525,-1.19529),
        children=[
        Shape(
          #  Vertex 132 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.05733,-0.86525,-1.19529),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['remain'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='133: report',
      children=[
      Transform(translation=(0.11510,-1.72557,-0.30741),
        children=[
        Shape(
          #  Vertex 133 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.26510,-1.72557,-0.30741),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['report'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='134: reserved',
      children=[
      Transform(translation=(-2.38279,-1.11900,1.76479),
        children=[
        Shape(
          #  Vertex 134 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.23279,-1.11900,1.76479),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['reserved'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='135: response',
      children=[
      Transform(translation=(0.76836,-1.90248,-0.40717),
        children=[
        Shape(
          #  Vertex 135 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.91836,-1.90248,-0.40717),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['response'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='136: retail',
      children=[
      Transform(translation=(-0.84985,-2.74215,0.44704),
        children=[
        Shape(
          #  Vertex 136 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.69985,-2.74215,0.44704),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['retail'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='137: revisited',
      children=[
      Transform(translation=(-2.13534,-1.24151,-1.84598),
        children=[
        Shape(
          #  Vertex 137 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.98534,-1.24151,-1.84598),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['revisited'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='138: robert',
      children=[
      Transform(translation=(-1.50854,2.74454,0.79464),
        children=[
        Shape(
          #  Vertex 138 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.35854,2.74454,0.79464),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['robert'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='139: rocked',
      children=[
      Transform(translation=(1.85299,1.49012,-1.05510),
        children=[
        Shape(
          #  Vertex 139 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.00299,1.49012,-1.05510),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rocked'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='140: roger',
      children=[
      Transform(translation=(-1.80404,1.28662,-2.37074),
        children=[
        Shape(
          #  Vertex 140 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.4392,0.5686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.65404,1.28662,-2.37074),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['roger'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='141: role',
      children=[
      Transform(translation=(-1.44247,-2.35688,-0.45021),
        children=[
        Shape(
          #  Vertex 141 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.29247,-2.35688,-0.45021),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['role'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='142: rotary',
      children=[
      Transform(translation=(-1.37505,-2.60145,-0.17007),
        children=[
        Shape(
          #  Vertex 142 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.22505,-2.60145,-0.17007),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['rotary'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='143: saturday',
      children=[
      Transform(translation=(-1.03029,-2.50421,-0.04728),
        children=[
        Shape(
          #  Vertex 143 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-0.88029,-2.50421,-0.04728),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['saturday'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='144: scenes',
      children=[
      Transform(translation=(-1.80228,1.05102,2.72621),
        children=[
        Shape(
          #  Vertex 144 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.65228,1.05102,2.72621),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['scenes'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='145: senior',
      children=[
      Transform(translation=(2.12255,-0.46833,1.93137),
        children=[
        Shape(
          #  Vertex 145 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.27255,-0.46833,1.93137),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['senior'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='146: service',
      children=[
      Transform(translation=(1.92300,1.63669,-0.95822),
        children=[
        Shape(
          #  Vertex 146 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.07300,1.63669,-0.95822),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['service'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='147: services',
      children=[
      Transform(translation=(0.59202,-1.78845,-1.15521),
        children=[
        Shape(
          #  Vertex 147 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.74202,-1.78845,-1.15521),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['services'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='148: shared',
      children=[
      Transform(translation=(-1.92990,0.74771,2.67954),
        children=[
        Shape(
          #  Vertex 148 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.77990,0.74771,2.67954),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['shared'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='149: sheet',
      children=[
      Transform(translation=(1.99354,0.17936,1.99517),
        children=[
        Shape(
          #  Vertex 149 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.14354,0.17936,1.99517),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sheet'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='150: sheeting',
      children=[
      Transform(translation=(0.84236,-0.60709,-2.40168),
        children=[
        Shape(
          #  Vertex 150 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.99236,-0.60709,-2.40168),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sheeting'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='151: shifting',
      children=[
      Transform(translation=(-2.18323,2.25645,0.11406),
        children=[
        Shape(
          #  Vertex 151 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.03323,2.25645,0.11406),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['shifting'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='152: south',
      children=[
      Transform(translation=(-2.30041,1.14640,2.17720),
        children=[
        Shape(
          #  Vertex 152 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.15041,1.14640,2.17720),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['south'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='153: southern',
      children=[
      Transform(translation=(2.15665,1.30781,1.77910),
        children=[
        Shape(
          #  Vertex 153 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.30665,1.30781,1.77910),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['southern'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='154: specialist',
      children=[
      Transform(translation=(2.29467,-0.20366,1.94305),
        children=[
        Shape(
          #  Vertex 154 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.44467,-0.20366,1.94305),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['specialist'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='155: specialists',
      children=[
      Transform(translation=(2.18951,0.20194,1.81418),
        children=[
        Shape(
          #  Vertex 155 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.33951,0.20194,1.81418),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['specialists'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='156: spike',
      children=[
      Transform(translation=(2.31686,-0.07560,1.92230),
        children=[
        Shape(
          #  Vertex 156 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.46686,-0.07560,1.92230),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['spike'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='157: staff',
      children=[
      Transform(translation=(2.47157,-0.66373,-0.60550),
        children=[
        Shape(
          #  Vertex 157 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.62157,-0.66373,-0.60550),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['staff'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='158: stands',
      children=[
      Transform(translation=(2.01820,0.37393,-0.92897),
        children=[
        Shape(
          #  Vertex 158 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.16820,0.37393,-0.92897),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['stands'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='159: states',
      children=[
      Transform(translation=(2.13015,1.70635,0.61707),
        children=[
        Shape(
          #  Vertex 159 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.28015,1.70635,0.61707),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['states'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='160: street',
      children=[
      Transform(translation=(-2.12526,2.28752,0.42172),
        children=[
        Shape(
          #  Vertex 160 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.97526,2.28752,0.42172),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['street'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='161: struck',
      children=[
      Transform(translation=(2.44367,-0.41495,-0.81622),
        children=[
        Shape(
          #  Vertex 161 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.59367,-0.41495,-0.81622),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['struck'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='162: sudan',
      children=[
      Transform(translation=(-1.52680,1.49375,2.65061),
        children=[
        Shape(
          #  Vertex 162 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.37680,1.49375,2.65061),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sudan'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='163: summary',
      children=[
      Transform(translation=(0.51497,-1.78241,-0.42771),
        children=[
        Shape(
          #  Vertex 163 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.66497,-1.78241,-0.42771),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['summary'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='164: sunday',
      children=[
      Transform(translation=(-1.59663,1.22035,2.75157),
        children=[
        Shape(
          #  Vertex 164 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.44663,1.22035,2.75157),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sunday'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='165: super',
      children=[
      Transform(translation=(-2.13190,0.63230,2.53744),
        children=[
        Shape(
          #  Vertex 165 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.98190,0.63230,2.53744),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['super'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='166: support',
      children=[
      Transform(translation=(1.32932,0.14161,-1.62068),
        children=[
        Shape(
          #  Vertex 166 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.47932,0.14161,-1.62068),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['support'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='167: supporting',
      children=[
      Transform(translation=(0.76409,-2.18746,-0.56267),
        children=[
        Shape(
          #  Vertex 167 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.91409,-2.18746,-0.56267),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['supporting'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='168: survey',
      children=[
      Transform(translation=(-1.43249,-2.00138,-0.56452),
        children=[
        Shape(
          #  Vertex 168 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.28249,-2.00138,-0.56452),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['survey'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='169: survivors',
      children=[
      Transform(translation=(1.34864,-0.67639,-1.14918),
        children=[
        Shape(
          #  Vertex 169 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.49864,-0.67639,-1.14918),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['survivors'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='170: sustainment',
      children=[
      Transform(translation=(2.06920,1.86413,1.49490),
        children=[
        Shape(
          #  Vertex 170 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.21920,1.86413,1.49490),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['sustainment'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='171: task',
      children=[
      Transform(translation=(2.16318,1.19023,1.06686),
        children=[
        Shape(
          #  Vertex 171 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.31318,1.19023,1.06686),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['task'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='172: team',
      children=[
      Transform(translation=(-2.32167,-0.12327,1.76053),
        children=[
        Shape(
          #  Vertex 172 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.17167,-0.12327,1.76053),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['team'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='173: tents',
      children=[
      Transform(translation=(0.69151,-0.76185,-2.65000),
        children=[
        Shape(
          #  Vertex 173 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.84151,-0.76185,-2.65000),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['tents'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='174: thoughts',
      children=[
      Transform(translation=(-1.96805,-1.88663,-1.02213),
        children=[
        Shape(
          #  Vertex 174 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.81805,-1.88663,-1.02213),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['thoughts'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='175: toll',
      children=[
      Transform(translation=(2.44307,-1.31150,-0.60774),
        children=[
        Shape(
          #  Vertex 175 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.59307,-1.31150,-0.60774),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['toll'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='176: topics',
      children=[
      Transform(translation=(-1.97068,1.50205,2.29239),
        children=[
        Shape(
          #  Vertex 176 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.82068,1.50205,2.29239),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['topics'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='177: toyota',
      children=[
      Transform(translation=(-2.39046,1.92834,0.83692),
        children=[
        Shape(
          #  Vertex 177 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.24046,1.92834,0.83692),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['toyota'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='178: tragedy',
      children=[
      Transform(translation=(-1.86561,2.53038,0.73799),
        children=[
        Shape(
          #  Vertex 178 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-1.71561,2.53038,0.73799),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['tragedy'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='179: travel',
      children=[
      Transform(translation=(-2.43924,1.08374,1.92766),
        children=[
        Shape(
          #  Vertex 179 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.28924,1.08374,1.92766),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['travel'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='180: treat',
      children=[
      Transform(translation=(0.90316,-1.44177,-0.85190),
        children=[
        Shape(
          #  Vertex 180 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5490,0.1373,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.05316,-1.44177,-0.85190),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['treat'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='181: updated',
      children=[
      Transform(translation=(-2.50940,-1.11987,-1.35773),
        children=[
        Shape(
          #  Vertex 181 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.35940,-1.11987,-1.35773),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['updated'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='182: uploaded',
      children=[
      Transform(translation=(-2.28546,-1.28122,1.94037),
        children=[
        Shape(
          #  Vertex 182 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.8471,0.9490))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.13546,-1.28122,1.94037),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['uploaded'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='183: urgent',
      children=[
      Transform(translation=(2.16075,-1.18443,-1.35114),
        children=[
        Shape(
          #  Vertex 183 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.31075,-1.18443,-1.35114),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['urgent'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='184: urgently',
      children=[
      Transform(translation=(1.16281,-0.31412,-1.87610),
        children=[
        Shape(
          #  Vertex 184 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.31281,-0.31412,-1.87610),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['urgently'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='185: usa',
      children=[
      Transform(translation=(2.75205,-0.83252,-0.49186),
        children=[
        Shape(
          #  Vertex 185 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.90205,-0.83252,-0.49186),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['usa'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='186: virginians',
      children=[
      Transform(translation=(0.40794,-0.24587,-2.63551),
        children=[
        Shape(
          #  Vertex 186 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.55794,-0.24587,-2.63551),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['virginians'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='187: vulnerable',
      children=[
      Transform(translation=(1.87840,-0.88405,-1.01780),
        children=[
        Shape(
          #  Vertex 187 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.02840,-0.88405,-1.01780),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['vulnerable'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='188: wa',
      children=[
      Transform(translation=(1.81658,-0.72132,2.33788),
        children=[
        Shape(
          #  Vertex 188 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,1.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.96658,-0.72132,2.33788),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['wa'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='189: wall',
      children=[
      Transform(translation=(-2.18323,2.25645,0.11406),
        children=[
        Shape(
          #  Vertex 189 
          appearance=Appearance(
            material=Material(diffuseColor=(0.1176,0.9765,0.6392))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.03323,2.25645,0.11406),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['wall'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='190: washington',
      children=[
      Transform(translation=(-2.36423,-0.99236,-1.67270),
        children=[
        Shape(
          #  Vertex 190 
          appearance=Appearance(
            material=Material(diffuseColor=(0.3765,0.4275,0.7686))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.21423,-0.99236,-1.67270),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['washington'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='191: water',
      children=[
      Transform(translation=(2.31572,-0.73996,-1.05089),
        children=[
        Shape(
          #  Vertex 191 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.46572,-0.73996,-1.05089),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['water'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='192: west',
      children=[
      Transform(translation=(0.40794,-0.24587,-2.63551),
        children=[
        Shape(
          #  Vertex 192 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.55794,-0.24587,-2.63551),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['west'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='193: western',
      children=[
      Transform(translation=(-2.42591,0.82159,2.18411),
        children=[
        Shape(
          #  Vertex 193 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(-2.27591,0.82159,2.18411),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['western'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='194: worked',
      children=[
      Transform(translation=(0.41310,-0.54538,-2.63224),
        children=[
        Shape(
          #  Vertex 194 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.56310,-0.54538,-2.63224),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['worked'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='195: working',
      children=[
      Transform(translation=(2.02252,-0.36759,0.40222),
        children=[
        Shape(
          #  Vertex 195 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.3882,0.1294))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(2.17252,-0.36759,0.40222),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['working'],
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

print ("python x3d.py load successful for 27.py")

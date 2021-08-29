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

newModel=X3D(profile='Interchange',version='3.1',
  head=head(
    children=[
    meta(content='ChainLinkFence.x3d',name='title'),
    meta(content='A segment of chain link fence',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='2 February 2005',name='created'),
    meta(content='31 January 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/HarborEquipment/ChainLinkFence/ChainLinkFence.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='VizX3D, http://www.vivaty.com/downloads/studio',name='generator'),
    meta(content='Wings3D, http://www.wings3d.com',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(translation=(-3.117805,0.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.239215,0.239215,0.239215))),
        geometry=Cylinder(height=5.072629,radius=0.126984))]),
    Transform(translation=(1.410146,0.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.243137,0.243137,0.243137))),
        geometry=Cylinder(height=5.072629,radius=0.126984))]),
    Transform(rotation=(0.0,0.0,-1.0,1.570796),translation=(-0.914066,2.422833,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.239215,0.239215,0.239215))),
        geometry=Cylinder(height=4.430181,radius=0.126984))]),
    Transform(rotation=(0.0,0.0,-1.0,1.570796),translation=(-0.914066,-2.416105,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.239215,0.239215,0.239215))),
        geometry=Cylinder(height=4.430181,radius=0.126984))]),
    Group(
      children=[
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.970241,-0.02823626,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=6.349808,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.792711,0.137312,-1.108581E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=6.349808,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.578799,0.336787,-2.444348E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=5.703121,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.364531,0.536597,-3.782341E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=5.112047,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.184065,0.704882,-4.909251E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=4.605759,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.02148515,0.896562,-6.192814E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=4.021098,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.240217,1.100533,-7.558684E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=3.495348,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.432891,1.280205,-8.76184E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=2.912166,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.65595,1.488211,-1.015472E-9),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=2.239979,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.848541,1.667804,-1.135734E-9),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=1.670928,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(1.041975,1.848184,-1.256523E-9),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=1.304755,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.191704,-0.234752,1.38292E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=5.808395,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.422016,-0.449521,2.821096E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=5.108776,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.681228,-0.691241,4.439746E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=4.391444,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.876119,-0.986171,6.632046E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=3.59872,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.083374,-1.269719,8.70415E-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=2.818727,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.296361,-1.532346,1.05857E-9),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=2.262494,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.409303,-1.917819,1.370491E-9),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=1.640859,radius=0.01444973))]),
      Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.700186,-2.021476,1.407724E-9),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=1.067649,radius=0.01444973))])]),
    Transform(rotation=(0.0,0.0,1.0,1.588249),translation=(-1.014135,0.895686,0.0),
      children=[
      Group(
        children=[
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.970241,-0.02823626,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=6.246735,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.674645,0.01070269,1.937626E-11),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=5.823521,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.484853,0.236043,-1.408062E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=5.431234,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.247822,0.411442,-2.494968E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=4.812192,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-0.05133263,0.562543,-3.445115E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=4.296447,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.148089,0.760796,-4.796281E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=3.786156,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.38308,0.947331,-5.982804E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=3.333546,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.536489,1.169111,-7.619088E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=2.606497,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.730162,1.408627,-9.336107E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=2.02616,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(0.949304,1.559748,-1.024585E-9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=1.500041,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(1.118956,1.765632,-1.171608E-9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=0.979363,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.191704,-0.234752,1.38292E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=5.808395,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.422016,-0.449521,2.821096E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=5.108776,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.681228,-0.691241,4.439746E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=4.391444,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-1.876119,-0.986171,6.632046E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=3.59872,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.083374,-1.269719,8.70415E-10),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=2.818727,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.296361,-1.532346,1.05857E-9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=2.262494,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.409303,-1.917819,1.370491E-9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=1.640859,radius=0.01444973))]),
        Transform(rotation=(-1.183244E-9,2.035458E-10,1.0,0.750491),translation=(-2.700186,-2.021476,1.407724E-9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=1.067649,radius=0.01444973))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChainLinkFence.py")

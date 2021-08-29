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
    meta(content='Bushmaster.x3d',name='title'),
    meta(content='Boeing Bushmaster II 30mm AAAV gun',name='description'),
    meta(content='William Geissler',name='creator'),
    meta(content='21 January 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Bushmaster.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["AAAV 30mm cannon"],title='Bushmaster II'),
    Transform(DEF='Bushmaster',rotation=(1,0,0,1.57),
      children=[
      Transform(DEF='Coaxial-Gun',translation=(0.5,0.5,0.5),
        children=[
        Transform(translation=(0.25,2,-1),
          children=[
          Shape(DEF='Coax-Barrel',
            geometry=Cylinder(radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.25,0.05))))]),
        Transform(scale=(0.9,0.9,0.9),translation=(0.25,3.18,-1),
          children=[
          Group(DEF='Coax-Flash-Suppressor',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Extrusion(ccw=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,0.38),(0.71,0.71),(0.38,0.92),(0.00,1.00),(-0.38,0.92),(-0.71,0.71),(-0.92,0.38),(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00),(0.80,0.00),(0.74,-0.31),(0.57,-0.57),(0.31,-0.74),(0.00,-0.80),(-0.31,-0.74),(-0.57,-0.57),(-0.74,-0.31),(-0.80,0.00),(-0.74,0.31),(-0.57,0.57),(-0.31,0.74),(0.00,0.80),(0.31,0.74),(0.57,0.57),(0.74,0.31),(0.80,0.00)],scale=[(.125,.125),(.125,.125)],spine=[(0.0,-0.2,0.0),(0.0,0.2,0.0)])),
            Transform(translation=(0,-0.24,0),
              children=[
              Shape(
                geometry=Cylinder(bottom=False,height=0.1,radius=0.07,side=False),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))])])])]),
      Group(DEF='Gun-System',
        children=[
        Shape(
          geometry=Box(),
          appearance=Appearance(
            texture=ImageTexture(url=["green1.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/green1.jpg"]))),
        Transform(translation=(0,2,0),
          children=[
          Shape(DEF='Mount',
            geometry=Cone(bottom=False,bottomRadius=0.5,height=4),
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.25,0.05))))]),
        Transform(scale=(1,6,1),translation=(0,5.3,0),
          children=[
          Shape(DEF='GunBarrel',
            geometry=Cylinder(bottom=False,height=1,radius=.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.25,0.05))))]),
        Transform(translation=(0,8.5,0),
          children=[
          Group(DEF='FlashSuppressor',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Extrusion(ccw=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,0.38),(0.71,0.71),(0.38,0.92),(0.00,1.00),(-0.38,0.92),(-0.71,0.71),(-0.92,0.38),(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00),(0.80,0.00),(0.74,-0.31),(0.57,-0.57),(0.31,-0.74),(0.00,-0.80),(-0.31,-0.74),(-0.57,-0.57),(-0.74,-0.31),(-0.80,0.00),(-0.74,0.31),(-0.57,0.57),(-0.31,0.74),(0.00,0.80),(0.31,0.74),(0.57,0.57),(0.74,0.31),(0.80,0.00)],scale=[(.125,.125),(.125,.125)],spine=[(0.0,-0.2,0.0),(0.0,0.2,0.0)])),
            Transform(translation=(0,-0.24,0),
              children=[
              Shape(
                geometry=Cylinder(bottom=False,height=0.1,radius=0.07,side=False),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))])])])]),
      Sound(location=(0,0,8.5),maxBack=100,maxFront=100,minBack=0,minFront=0,
        source=AudioClip(DEF='Source',description='rapid fire',url=["tone1.wav","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/tone1.wav"])),
      TouchSensor(DEF='FireSensor',description='click to fire'),
      TimeSensor(DEF='CLOCK')]),
    Transform(DEF='PROJECTILE',rotation=(1,0,0,1.57),scale=(.1,.1,.1),
      children=[
      Inline(url=["HotLead.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/HotLead.x3d","HotLead.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/HotLead.wrl"]),
      PositionInterpolator(DEF='PROJECTILEPATH',key=[0.00,0.00,0.02,0.04,0.06,0.08,0.10,0.12,0.14,0.16,0.18,0.18,0.20,0.20,0.22,0.24,0.26,0.28,0.30,0.32,0.34,0.36,0.38,0.38,0.40,0.40,0.42,0.44,0.46,0.48,0.50,0.52,0.54,0.56,0.58,0.58,0.60,0.60,0.62,0.64,0.66,0.68,0.70,0.72,0.74,0.76,0.78,0.78,0.80,0.80,0.82,0.84,0.86,0.88,0.90,0.92,0.94,0.96,0.98,0.98],keyValue=[(0.0,0.0,0.0),(0.0,0.0,9.0),(0.0,0.0,24.0),(0.0,0.0,36.0),(0.0,0.0,48.0),(0.0,0.0,60.0),(0.0,0.0,72.0),(0.0,0.0,84.0),(0.0,0.0,96.0),(0.0,0.0,108.0),(0.0,0.0,120.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.0,0.0,9.0),(0.0,0.0,24.0),(0.0,0.0,36.0),(0.0,0.0,48.0),(0.0,0.0,60.0),(0.0,0.0,72.0),(0.0,0.0,84.0),(0.0,0.0,96.0),(0.0,0.0,108.0),(0.0,0.0,120.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.0,0.0,9.0),(0.0,0.0,24.0),(0.0,0.0,36.0),(0.0,0.0,48.0),(0.0,0.0,60.0),(0.0,0.0,72.0),(0.0,0.0,84.0),(0.0,0.0,96.0),(0.0,0.0,108.0),(0.0,0.0,120.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.0,0.0,9.0),(0.0,0.0,24.0),(0.0,0.0,36.0),(0.0,0.0,48.0),(0.0,0.0,60.0),(0.0,0.0,72.0),(0.0,0.0,84.0),(0.0,0.0,96.0),(0.0,0.0,108.0),(0.0,0.0,120.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.0,0.0,9.0),(0.0,0.0,24.0),(0.0,0.0,36.0),(0.0,0.0,48.0),(0.0,0.0,60.0),(0.0,0.0,72.0),(0.0,0.0,84.0),(0.0,0.0,96.0),(0.0,0.0,108.0),(0.0,0.0,120.0),(0.0,0.0,0.0)])]),
    ROUTE(fromField='touchTime',fromNode='FireSensor',toField='set_startTime',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='PROJECTILEPATH'),
    ROUTE(fromField='value_changed',fromNode='PROJECTILEPATH',toField='set_translation',toNode='PROJECTILE'),
    ROUTE(fromField='touchTime',fromNode='FireSensor',toField='set_startTime',toNode='Source')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bushmaster.py")

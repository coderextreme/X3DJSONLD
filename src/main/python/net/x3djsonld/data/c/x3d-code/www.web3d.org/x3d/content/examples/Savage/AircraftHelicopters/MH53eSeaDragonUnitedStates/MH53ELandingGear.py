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
    meta(content='MH53ELandingGear.x3d',name='title'),
    meta(content="MH-53E Sea Dragon landing gear constructed of primative shapes and extrusions. All materials borrowed from Capt Allen A. Harper's CH-46 model.",name='description'),
    meta(content='Capt Allen A. Harper, USMC',name='creator'),
    meta(content='LT Terry D. Norbraten, USN',name='contributor'),
    meta(content='2 August 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='1.1',name='version'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='Sikorsky MH-53E Sea Dragon Landing Gear.',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ELandingGear.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Model of wheel 
    children=[
    Transform(rotation=(0,0,1,1.571),translation=(0,1.6,0),
      children=[
      Transform(DEF='BigWheel',
        children=[
        Transform(rotation=(0,0,1,1.57),scale=(0.15,0.15,0.15),
          children=[
          Shape(DEF='Tire',
            geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))))]),
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(DEF='Rim',
            geometry=Cylinder(height=.2,radius=.15),
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.8))))])])]),
    #  Front Wheel and axle 
    Transform(DEF='GearAssembly',center=(0,1,0),scale=(0.5,0.5,0.5),translation=(0,-1,3.6),
      children=[
      Shape(DEF='Strut',
        geometry=Cylinder(height=1,radius=.07),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,.9,.9)))),
      Transform(translation=(0,-0.5,0),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(DEF='Axel',
            geometry=Cylinder(height=.5,radius=.07),
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.8))))])]),
      Transform(rotation=(1,0,0,1.57),translation=(.25,-0.5,0),
        children=[
        Transform(USE='BigWheel')]),
      Transform(rotation=(1,0,0,1.57),translation=(-.25,-0.5,0),
        children=[
        Transform(USE='BigWheel')])]),
    #  Rear Left Wheel and axle 
    Transform(translation=(1.7,0,-4.5),
      children=[
      Transform(USE='GearAssembly')]),
    #  Rear Right Wheel and axle 
    Transform(translation=(-1.7,0,-4.5),
      children=[
      Transform(USE='GearAssembly')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53ELandingGear.py")

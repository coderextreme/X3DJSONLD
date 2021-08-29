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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='MH53EMainRotorBlade.x3d',name='title'),
    meta(content='MH-53E main rotor blade and blade extender. Single blade created of indexed face sets and extender, extender connection and blade connection created out of primative cylndrical shapes. Airfoil and chord dimensions in proportion with actual blade.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='5 March 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='MH-53E Sea Dragon Main Rotor Blade',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EMainRotorBlade.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='Blade',
      appearance=Appearance(
        material=Material(),),
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1,8,6,7,-1,8,7,0,-1,8,0,1,-1,9,2,3,-1,9,3,4,-1,9,4,5,-1,1,2,9,8,-1,8,9,5,6,-1,0,7,6,5,4,3,2,1,-1,10,1,0,-1,10,0,7,-1,10,7,6,-1,11,3,2,-1,11,4,3,-1,11,5,4,-1,10,11,2,1,-1,6,5,11,10],creaseAngle=3.1416,
        coord=Coordinate(point=[(.1,0,0),(0,0,.3),(0,0,6.8),(.15,0,7),(.3,0,7),(.76,0,6.6),(.76,0,.6),(.6,0,0),(.09,.05,.2),(.09,.05,6.8),(.09,-.05,.2),(.09,-.05,6.8)]))),
    Transform(rotation=(1,0,0,1.57),translation=(.2,0,7.42),
      children=[
      Shape(DEF='Extender',
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=1.3,radius=.05)),
      Shape(DEF='ExtenderConnection',
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=.01,radius=.06))]),
    Transform(rotation=(1,0,0,1.57),translation=(.2,0,8.075),
      children=[
      Shape(DEF='BladeConnector',
        appearance=Appearance(
          material=Material(),),
        geometry=Cylinder(height=.01,radius=.06))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53EMainRotorBlade.py")

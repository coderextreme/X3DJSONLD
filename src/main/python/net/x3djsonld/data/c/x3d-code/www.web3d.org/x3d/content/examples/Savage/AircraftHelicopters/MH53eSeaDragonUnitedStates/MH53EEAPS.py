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
    meta(content='MH53EEAPS.x3d',name='title'),
    meta(content='MH-53E Sea Dragon T64-GE-416 engine air particle seperator (EAPS) outline constructed by extrusion.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='19 March 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='MH-53E Sea Dragon T64-GE-416 engine air particle seperator (EAPS).',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EEAPS.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='EAPS',
      appearance=Appearance(
        material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
      geometry=Extrusion(creaseAngle=.2,crossSection=[(0,.5),(0,-.5),(-.191342,-.46194),(-.353553,-.353553),(-.46194,-.191342),(-.5,0),(-.46194,.191342),(-.353553,.353553),(-.191342,.46194),(0,.5)],scale=[(.8553,.8553),(.9447,.9447),(.9702,.9702),(1,1),(1.2,1.2),(1.1,1.1),(1,1)],solid=False,spine=[(.300018,-.150862,-.1),(.300059,-.249184,-.1),(.300066,-.243494,-.1),(.30007,-.2,-.1),(.3,.8,-.1),(.3,.9,-.1),(.3168,1,-.1)])),
    Transform(rotation=(0,0,1,1.571),translation=(0.8,0.8,-0.05),
      children=[
      Shape(DEF='ScavangExhaust',
        appearance=Appearance(
          material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
        geometry=Cylinder(height=0.5,radius=0.1))]),
    Viewpoint(description='EAPS Front, level',orientation=(1,0,0,1.571),position=(0.5,-3,0)),
    Transform(rotation=(0,1,0,1.571),
      children=[
      Viewpoint(description='EAPS Left, level',orientation=(0,0,1,1.571),position=(0,0.5,3))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53EEAPS.py")

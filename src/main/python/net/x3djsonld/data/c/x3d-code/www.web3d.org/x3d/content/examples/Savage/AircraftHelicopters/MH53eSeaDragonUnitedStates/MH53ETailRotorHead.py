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
    meta(content='MH53ETailRotorHead.x3d',name='title'),
    meta(content='MH-53E tail rotor head assembly. Primative cylinder shapes for sleeve and spindle assemblies and pitch change rods inlined with 4 H-53E main rotor blades scaled down, all topped off with a cone for a rotor cap. Dimensions in proportion with tail head.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='24 March 2004',name='created'),
    meta(content='24 March 2012',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='MH-53E Sea Dragon Tail Rotor Head Assembly',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ETailRotorHead.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='RotorHeadAssembly',
      children=[
      Transform(translation=(0,-0.3,0),
        children=[
        Shape(DEF='RotatingSwashplate',
          appearance=Appearance(
            material=Material(diffuseColor=(0.25,0.25,0.25))),
          geometry=Cylinder(height=.12,radius=0.7))]),
      Transform(translation=(0,0.13,0),
        children=[
        Shape(DEF='RotorCap',
          appearance=Appearance(
            material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
          geometry=Cone(bottomRadius=0.7,height=0.12))]),
      Transform(DEF='TailRotorShaft',translation=(0,-0.3,0),
        children=[
        Shape(DEF='Post',
          appearance=Appearance(DEF='BLACK_SPECULAR_SHINY',
            material=Material(diffuseColor=(.15,.15,.15),shininess=.8,specularColor=(.8,.8,.8))),
          geometry=Cylinder(height=0.7,radius=.07))]),
      Transform(DEF='Sleeve_Spindle_Blade',rotation=(1,0,0,1.571),translation=(0,0,-0.47),
        children=[
        Transform(rotation=(0,1,0,3.142),
          children=[
          Transform(rotation=(1,0,0,-1.571),translation=(-0.2,-8.43,0),
            children=[
            Inline(DEF='TailRotorBlade1',url=["MH53EMainRotorBlade.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EMainRotorHead.x3d","MH53EMainRotorBlade.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EMainRotorHead.wrl"])])]),
        Shape(DEF='SleeveAndSpindle',
          appearance=Appearance(USE='BLACK_SPECULAR_SHINY'),
          geometry=Cylinder(height=0.7,radius=.07)),
        Transform(rotation=(1,0,0,1.571),translation=(-0.06,-0.2,0.17),
          children=[
          Shape(DEF='PitchChangeRod',
            appearance=Appearance(USE='BLACK_SPECULAR_SHINY'),
            geometry=Cylinder(height=0.3,radius=.01))])]),
      Transform(DEF='Blade2',rotation=(0,1,0,1.571),
        children=[
        Transform(USE='Sleeve_Spindle_Blade')]),
      Transform(DEF='Blade3',rotation=(0,1,0,3.142),
        children=[
        Transform(USE='Sleeve_Spindle_Blade')]),
      Transform(DEF='Blade4',rotation=(0,1,0,4.713),
        children=[
        Transform(USE='Sleeve_Spindle_Blade')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53ETailRotorHead.py")

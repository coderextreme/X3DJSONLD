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
    meta(content='DD963Harpoon',name='title'),
    meta(content='Spruance Harpoon Canisters',name='description'),
    meta(content='LT James Harney',name='creator'),
    meta(content='15 August 2001',name='created'),
    meta(content='13 October 2002',name='modified'),
    meta(content='LT Josh Hansen',name='Revised_by'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/DD963Harpoon.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/smart/agm-84.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Group(
        children=[
        Transform(DEF='HARPOON',rotation=(0,1,0,1.52),scale=(1.5,1.5,1.5),translation=(0,6.375,-42),
          children=[
          Transform(DEF='HARPOONBUNCH1',rotation=(1,0,0,-.47),translation=(0,-.4,10),
            children=[
            Group(DEF='HARPOONBUNCH',
              children=[
              Transform(translation=(0,-0.245,0),
                children=[
                Group(DEF='MISSILE',
                  children=[
                  Transform(rotation=(1,0,0,-0.5),
                    children=[
                    Shape(DEF='HarpoonWithHolders',
                      appearance=Appearance(DEF='HARPOONGREY',
                        material=Material(),),
                      geometry=Cylinder(height=5,radius=0.25)),
                    Transform(DEF='HARPOONDOWNHOLDER',translation=(0,-1.5,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.5,0.2,0.5)))]),
                    Transform(DEF='HARPOONTOPHOLDER',translation=(0,1.5,0),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(),),
                        geometry=Box(size=(0.5,0.2,0.5)))])])])]),
              Transform(translation=(0.5,-0.245,0),
                children=[
                Group(USE='MISSILE')]),
              Transform(translation=(0,0,0.5),
                children=[
                Group(USE='MISSILE')]),
              Transform(translation=(0.5,0,0.5),
                children=[
                Group(USE='MISSILE')]),
              Transform(rotation=(1,0,0,-0.5),translation=(0.25,-0.45,-0.26),
                children=[
                Shape(
                  appearance=Appearance(USE='HARPOONGREY'),
                  geometry=Box(size=(1.05,5,0.1)))])])]),
          Transform(DEF='HarpoonBunch2',rotation=(1,0,0,-1.7),translation=(-.1,-0.77,0.7),
            children=[
            Group(USE='HARPOONBUNCH')]),
          Transform(DEF='HarpoonSupport1',translation=(.15,-2.25,0.5),
            children=[
            Shape(
              appearance=Appearance(USE='HARPOONGREY'),
              geometry=Box(size=(1,1.5,0.1)))]),
          Transform(DEF='HarpoonSupport2',translation=(0.225,-1.85,10.0),
            children=[
            Shape(
              appearance=Appearance(USE='HARPOONGREY'),
              geometry=Box(size=(1,1.5,0.1)))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for .py")

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
    meta(content='DeckPost.x3d',name='title'),
    meta(content='An equipment deck post for the MSADS Assembly',name='description'),
    meta(content='Ron Hatt',name='creator'),
    meta(content='13 September 2006',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Space/SatelliteLab/DeckPost.x3d',name='identifier'),
    meta(content='Wings3D, VizX3D',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='DeckPost',
      appearance=Appearance(
        material=Material(ambientIntensity=0.4,diffuseColor=(1.0,0.77,0.31),shininess=0.16,specularColor=(0.71,0.70,0.56))),
      geometry=IndexedFaceSet(coordIndex=[0,1,17,-1,0,17,16,-1,0,15,14,-1,0,14,13,-1,0,13,12,-1,0,12,11,-1,0,11,10,-1,0,10,9,-1,0,9,8,-1,0,8,7,-1,0,7,6,-1,0,6,5,-1,0,5,4,-1,0,4,3,-1,0,3,2,-1,0,2,1,-1,0,16,31,-1,0,31,15,-1,1,2,18,-1,1,18,17,-1,2,3,19,-1,2,19,18,-1,3,4,20,-1,3,20,19,-1,4,5,21,-1,4,21,20,-1,5,6,22,-1,5,22,21,-1,6,7,23,-1,6,23,22,-1,7,8,24,-1,7,24,23,-1,8,9,25,-1,8,25,24,-1,9,10,26,-1,9,26,25,-1,10,11,27,-1,10,27,26,-1,11,12,28,-1,11,28,27,-1,12,13,29,-1,12,29,28,-1,13,14,30,-1,13,30,29,-1,14,15,31,-1,14,31,30,-1,16,17,18,-1,16,18,19,-1,16,19,20,-1,16,20,21,-1,16,21,22,-1,16,22,23,-1,16,23,24,-1,16,24,25,-1,16,25,26,-1,16,26,27,-1,16,27,28,-1,16,28,29,-1,16,29,30,-1,16,30,31,-1],creaseAngle=0.956,
        coord=Coordinate(point=[(.15,3.56,-0),(.13858,3.56,.0574),(.10607,3.56,.10607),(.0574,3.56,.13858),(-0,3.56,.15),(-.0574,3.56,.13858),(-.10607,3.56,.10607),(-.13858,3.56,.0574),(-.15,3.56,0),(-.13858,3.56,-.0574),(-.10607,3.56,-.10607),(-.0574,3.56,-.13858),(-0,3.56,-.15),(.0574,3.56,-.13858),(.10607,3.56,-.10607),(.13858,3.56,-.0574),(.15,0,-0),(.13858,0,.0574),(.10607,0,.10607),(.0574,0,.13858),(-0,0,.15),(-.0574,0,.13858),(-.10607,0,.10607),(-.13858,0,.0574),(-.15,0,0),(-.13858,0,-.0574),(-.10607,0,-.10607),(-.0574,0,-.13858),(-0,0,-.15),(.0574,0,-.13858),(.10607,0,-.10607),(.13858,0,-.0574)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DeckPost.py")

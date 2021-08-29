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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.71825065109993,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-14.x3d'],child2Url=['../../tiles/5/newport24-15.x3d'],child3Url=['../../tiles/5/newport25-14.x3d'],child4Url=['../../tiles/5/newport25-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[65,45,39,32,45,50,52,44,43,58,78,79,77,66,59,44,26,9,0,0,0,0,54,41,36,37,49,51,49,47,47,57,71,71,67,64,57,47,22,0,0,0,0,0,47,36,37,45,48,52,48,47,48,53,56,63,63,53,50,35,13,0,0,0,0,0,40,39,37,42,54,55,51,46,47,46,47,48,48,46,29,18,2,0,0,0,0,0,41,38,40,41,51,52,53,51,51,40,29,22,24,21,10,1,0,0,0,0,1,3,38,36,36,41,49,59,61,56,41,32,20,13,15,8,4,1,4,1,0,0,11,11,32,34,36,44,58,65,64,52,38,23,12,10,11,18,7,10,8,5,0,0,13,18,27,29,36,45,49,57,55,38,28,15,11,11,10,15,15,3,0,0,10,17,17,18,36,40,30,35,35,30,24,22,18,15,5,4,8,4,2,0,5,6,17,20,15,15,46,42,40,30,27,25,24,24,21,11,7,8,12,8,9,9,16,21,20,19,18,17,51,51,39,35,31,29,29,27,24,17,13,9,11,19,15,19,16,20,22,21,20,19,54,46,33,29,30,39,27,21,17,16,10,8,6,5,13,23,24,21,22,21,19,19,60,40,38,45,34,33,39,25,17,17,9,4,4,4,21,25,29,25,24,22,21,19,40,36,38,47,53,34,23,19,19,18,17,13,17,22,22,25,27,23,24,23,21,20,39,41,45,45,40,30,20,13,17,17,21,21,21,24,24,27,24,26,24,24,20,21,42,63,55,49,37,25,17,14,15,22,25,25,22,22,23,22,23,23,22,21,20,20,44,50,55,49,38,21,19,19,20,21,29,28,25,25,22,20,18,30,26,21,21,22,34,37,42,31,22,22,17,13,13,24,28,26,25,23,23,20,19,18,22,23,24,24,23,24,28,13,6,14,12,12,16,23,27,27,19,16,18,17,16,15,22,23,23,22,17,15,8,15,11,13,9,17,23,30,30,26,26,18,15,16,16,11,26,24,22,22,6,8,14,16,18,6,11,21,19,19,22,20,17,13,16,8,16,20,25,26,22,21,7,9,13,17,18,6,11,20,18,18,21,19,15,13,16,8,15,22,27,27,22,22],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")

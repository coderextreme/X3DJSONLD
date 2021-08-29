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
    GeoLOD(center=(41.71825065109993,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-28.x3d'],child2Url=['../../tiles/5/newport24-29.x3d'],child3Url=['../../tiles/5/newport25-28.x3d'],child4Url=['../../tiles/5/newport25-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[54,54,54,54,55,56,55,56,56,59,67,67,62,58,51,46,43,41,39,39,39,39,59,59,62,54,55,57,56,55,56,62,68,70,61,51,48,44,42,40,44,40,39,39,61,59,58,54,54,59,56,58,58,63,69,64,60,50,45,45,43,40,42,41,49,48,47,53,57,56,53,52,52,55,60,66,63,57,53,48,44,42,41,40,40,43,41,41,38,43,49,52,52,53,53,57,63,67,62,59,58,51,43,38,39,42,44,41,40,41,30,31,35,47,59,59,54,57,64,70,68,64,60,53,49,41,37,42,39,42,48,51,18,23,34,45,55,56,52,52,64,71,67,61,48,43,43,39,38,37,43,45,51,53,7,17,29,44,45,44,46,50,62,63,57,49,40,41,45,38,38,38,43,46,51,53,3,7,12,30,34,33,34,45,52,52,51,43,39,41,38,39,39,40,40,41,49,50,1,1,5,9,13,15,18,24,36,44,46,40,38,38,39,40,43,42,40,41,44,44,1,1,1,1,4,4,6,12,20,29,35,34,39,41,41,41,46,48,47,47,45,45,1,1,1,1,1,1,3,3,1,22,32,40,46,51,46,46,55,55,62,62,54,53,1,1,1,1,1,1,1,1,2,16,28,40,54,59,53,57,65,62,69,66,60,59,1,1,1,1,1,1,1,1,1,4,24,37,58,65,64,70,70,67,66,59,57,56,1,1,1,1,1,1,1,1,1,1,11,30,54,64,69,75,71,66,61,59,59,58,8,5,1,1,1,1,1,1,1,1,5,10,33,50,60,70,68,64,62,69,69,67,15,8,4,2,1,1,1,1,1,1,7,8,10,25,35,50,63,64,66,70,70,70,19,12,13,5,4,2,1,1,1,1,2,8,8,10,13,28,54,61,63,61,61,61,23,20,21,13,13,11,3,1,1,1,4,8,11,12,11,11,30,53,57,57,55,55,26,27,27,22,23,22,15,8,1,1,1,9,9,12,9,6,13,39,51,53,54,54,29,32,31,30,33,30,24,18,12,4,1,1,1,12,10,4,5,21,40,50,59,60,30,32,31,30,33,30,25,19,13,5,1,1,1,11,8,4,6,20,40,51,59,60],
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

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
    GeoLOD(center=(41.64568042259594,-71.48342589019228,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-6.x3d'],child2Url=['../../tiles/4/newport10-7.x3d'],child3Url=['../../tiles/4/newport11-6.x3d'],child4Url=['../../tiles/4/newport11-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[71,82,80,76,64,53,38,29,25,29,27,33,21,21,27,21,11,0,2,0,0,1,85,98,93,77,85,64,44,37,26,24,28,23,21,20,24,23,17,9,0,13,6,5,91,100,101,87,71,55,36,24,30,28,20,23,25,22,33,22,25,9,4,17,14,11,105,101,100,85,62,46,37,35,21,23,20,26,30,23,29,32,25,15,9,9,9,8,106,107,97,88,65,50,41,27,19,23,21,21,23,19,26,40,27,22,9,8,10,12,99,98,97,84,65,48,38,42,20,18,24,22,16,15,19,24,19,12,16,10,11,9,109,103,82,84,79,51,56,51,19,23,22,26,21,20,21,19,16,14,15,14,12,14,102,81,75,76,69,62,64,45,32,17,28,19,21,24,23,16,18,18,13,17,18,16,86,90,89,86,72,74,68,48,32,27,27,27,24,25,22,15,14,13,15,14,15,13,84,83,84,77,67,66,56,48,37,29,27,20,28,25,21,16,17,17,11,13,15,20,87,80,69,61,52,55,43,55,50,46,21,16,21,18,23,20,21,18,11,12,28,23,77,71,64,72,75,62,63,55,42,32,29,22,24,19,15,16,18,13,15,16,29,33,76,71,85,75,75,68,65,48,37,37,35,34,30,30,19,15,16,23,11,11,25,28,75,80,91,80,68,64,60,48,42,45,54,35,33,27,16,16,19,22,14,13,10,16,77,81,85,78,70,66,66,63,61,70,65,44,33,26,23,26,18,0,15,22,9,5,81,90,84,79,66,65,66,71,65,59,53,43,29,26,22,18,25,21,0,17,16,17,89,107,91,79,72,73,76,74,66,53,48,39,37,36,25,20,29,32,21,0,18,22,90,103,109,88,80,83,81,78,74,60,55,41,37,30,25,26,48,50,28,5,0,16,81,90,84,81,76,73,73,71,69,62,47,39,33,38,29,46,61,56,26,0,0,3,72,67,80,87,86,76,78,79,94,80,60,34,52,48,36,63,72,56,27,0,0,0,48,72,88,90,75,72,83,107,105,83,64,39,40,51,44,78,73,60,24,1,0,0,48,72,88,89,75,72,84,109,105,82,64,39,39,52,45,78,73,61,24,0,0,0],
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

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
    GeoLOD(center=(41.669870498763935,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-26.x3d'],child2Url=['../../tiles/5/newport22-27.x3d'],child3Url=['../../tiles/5/newport23-26.x3d'],child4Url=['../../tiles/5/newport23-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[1,2,1,1,1,6,28,41,40,33,31,32,30,32,43,41,41,40,40,41,46,47,1,4,1,1,1,5,28,40,50,45,45,33,35,40,56,50,40,40,50,49,51,50,1,3,1,1,1,6,25,40,49,44,42,47,57,49,61,49,43,48,50,46,46,50,4,15,1,1,1,2,22,34,43,50,58,68,60,53,62,53,46,43,44,58,53,57,4,8,5,1,1,2,18,35,43,67,57,67,63,58,58,52,49,48,52,68,68,66,5,8,1,1,1,1,13,35,42,45,54,76,61,62,60,56,54,51,50,60,55,56,5,4,1,1,1,1,9,29,39,48,55,68,65,64,62,63,60,61,61,52,58,63,8,1,1,1,1,1,7,24,29,45,58,66,66,64,65,69,70,70,72,58,57,56,4,1,1,1,1,1,1,13,33,48,70,76,78,71,75,69,70,74,74,61,58,62,3,1,1,1,1,1,1,10,42,58,62,72,79,83,86,79,76,75,70,61,59,59,1,1,1,1,1,1,1,3,36,64,69,71,74,84,93,86,82,78,74,65,56,55,1,1,1,1,1,1,1,1,23,47,60,62,61,71,75,78,82,84,76,66,61,55,1,1,1,1,1,1,1,1,11,31,41,48,55,63,70,76,83,84,77,70,58,56,1,1,1,1,1,1,1,1,1,9,23,37,52,61,71,74,84,81,72,66,63,58,1,1,1,1,1,1,1,1,1,1,14,28,46,61,59,71,82,77,69,61,64,59,1,1,1,1,1,1,1,1,1,1,1,14,33,55,54,63,70,69,67,70,57,56,1,1,1,1,1,1,1,1,1,1,1,4,12,24,41,54,68,67,65,59,57,55,1,1,1,1,1,1,1,1,1,1,1,1,5,10,25,52,67,68,61,56,55,55,1,1,1,1,1,1,1,1,1,1,1,1,2,7,14,43,66,75,69,56,54,54,1,1,1,1,1,1,1,1,1,1,1,1,1,5,10,26,53,68,77,61,54,54,1,1,1,1,1,1,1,1,1,1,1,1,1,6,11,16,32,53,63,60,57,54,1,1,1,1,1,1,1,1,1,1,1,1,1,5,11,17,32,51,61,60,58,54],
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

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
    GeoLOD(center=(41.573110194091946,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-24.x3d'],child2Url=['../../tiles/5/newport18-25.x3d'],child3Url=['../../tiles/5/newport19-24.x3d'],child4Url=['../../tiles/5/newport19-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[82,74,67,65,62,66,65,63,53,43,34,25,20,8,0,0,0,0,0,0,0,0,90,79,71,67,67,64,62,55,49,41,33,29,22,5,0,0,0,0,0,0,0,0,84,86,76,70,66,60,54,50,44,38,35,33,26,12,0,0,0,0,0,0,0,0,83,85,81,73,75,62,55,53,50,45,43,38,20,15,0,0,0,0,0,0,0,0,81,91,84,75,70,65,58,57,51,47,44,36,37,21,0,0,0,0,0,0,0,0,80,83,88,76,69,66,60,55,52,46,41,45,38,21,0,0,0,0,0,0,0,0,78,84,84,80,74,70,63,56,52,46,45,46,37,19,4,0,0,0,0,0,0,0,68,72,72,76,81,76,65,58,53,47,45,43,29,11,1,0,0,0,0,0,0,0,61,67,69,78,81,80,66,59,55,47,44,33,19,2,0,0,0,0,0,0,0,0,68,71,74,79,84,80,69,57,51,39,23,22,15,0,0,0,0,0,0,0,0,0,69,70,76,82,83,80,73,62,53,43,42,36,19,0,0,0,0,0,0,0,0,0,73,79,84,89,90,81,72,63,55,45,45,40,22,1,0,0,0,0,0,0,0,0,72,85,81,86,91,93,72,59,56,47,47,44,34,11,0,0,0,0,0,0,0,0,66,83,85,81,80,80,72,64,55,49,49,47,39,18,0,0,0,0,0,0,0,0,61,75,79,82,82,76,70,69,59,53,52,48,41,19,0,0,0,0,0,0,0,0,58,70,79,83,82,81,76,71,62,56,51,45,38,20,0,0,0,0,0,0,0,0,64,70,84,92,86,87,88,78,66,56,49,40,33,15,0,0,0,0,0,0,0,0,65,78,93,94,88,86,76,75,68,57,49,38,27,8,2,0,0,0,0,0,0,0,72,81,91,91,82,78,75,67,63,56,46,33,19,0,0,0,0,0,0,0,0,0,69,82,84,88,84,84,75,67,64,53,37,15,3,0,0,0,0,0,0,0,0,0,67,76,81,89,86,91,83,80,68,50,27,3,0,0,0,0,0,0,0,0,0,0,68,76,82,86,87,91,83,79,68,49,26,2,0,0,0,0,0,0,0,0,0,0],
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

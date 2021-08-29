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
    GeoLOD(center=(41.59143480887271,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-22.x3d'],child2Url=['../../tiles/5/newport18-23.x3d'],child3Url=['../../tiles/5/newport19-22.x3d'],child4Url=['../../tiles/5/newport19-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[88,89,86,83,84,83,83,81,77,72,70,68,67,65,65,63,61,58,53,49,44,39,32,30,88,88,82,83,88,85,85,84,81,76,73,69,67,66,65,64,61,58,53,49,43,37,30,28,89,87,83,84,88,89,89,86,84,78,74,72,71,69,67,65,62,58,53,48,40,33,27,26,88,88,84,88,89,88,90,89,84,81,77,75,74,72,70,66,63,59,52,46,37,30,24,21,90,84,79,85,87,91,90,91,84,83,79,77,80,75,71,68,63,57,50,43,35,28,20,18,82,81,81,88,91,89,92,90,86,83,80,79,77,74,72,69,63,56,48,39,31,24,16,14,78,79,81,83,87,90,88,90,86,83,82,79,77,75,72,69,63,54,45,36,27,19,11,9,77,73,78,85,87,85,88,87,84,84,81,77,76,75,72,67,61,52,44,33,24,15,6,4,69,66,72,78,83,85,88,85,84,83,82,77,76,72,69,65,58,49,42,33,23,13,4,2,69,69,68,76,81,84,85,84,84,81,80,79,74,73,69,63,55,48,40,31,22,12,1,0,68,71,67,70,77,84,85,83,84,81,80,77,72,70,65,60,54,47,37,29,20,10,0,0,61,63,69,75,78,81,84,82,82,82,81,76,70,67,62,57,51,45,36,26,18,11,1,0,61,65,74,81,84,88,80,81,80,79,77,71,66,63,58,54,49,42,35,26,18,11,2,0,59,66,69,68,73,83,82,81,79,80,75,73,67,61,56,52,47,42,34,26,18,12,1,0,58,59,61,66,70,79,82,82,82,80,75,71,67,59,55,50,46,40,33,25,18,12,3,1,62,61,63,67,69,72,76,81,81,78,74,69,63,58,53,49,44,39,31,24,17,11,3,1,58,60,64,65,64,73,76,78,80,76,73,68,62,55,50,47,42,37,29,23,17,9,0,0,57,58,63,60,61,69,72,76,79,73,69,65,58,54,49,45,41,35,27,21,15,8,0,0,61,57,56,59,60,63,69,73,74,70,66,60,58,54,51,46,40,33,27,22,15,7,0,0,60,59,56,56,57,62,63,66,65,62,58,56,58,53,51,46,40,33,26,19,13,7,0,0,60,60,58,52,51,57,59,61,57,56,56,53,52,50,48,45,39,33,25,19,12,7,1,0,59,56,50,46,47,51,56,54,53,53,52,52,49,47,45,43,37,30,25,18,11,8,3,1,54,50,50,46,43,50,54,48,47,47,48,45,45,45,43,40,36,30,23,18,12,7,3,2,52,49,50,44,43,50,53,45,46,45,47,45,44,43,42,39,36,30,23,17,12,8,3,2],
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

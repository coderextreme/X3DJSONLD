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
    GeoLOD(center=(41.5833639510952,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport8-10.x3d'],child2Url=['../../tiles/4/newport8-11.x3d'],child3Url=['../../tiles/4/newport9-10.x3d'],child4Url=['../../tiles/4/newport9-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[45,53,61,65,68,72,80,82,86,90,87,87,83,77,74,63,57,49,47,46,44,40,45,51,57,60,69,77,84,88,86,88,88,87,73,68,57,55,49,47,48,47,37,39,45,49,56,64,74,84,85,83,81,82,80,77,67,62,55,50,49,49,47,32,42,45,46,51,58,69,78,85,84,82,78,76,73,68,66,58,50,50,51,48,43,43,44,48,51,56,68,76,78,81,83,84,77,71,69,66,60,55,53,51,48,54,49,52,49,48,59,65,74,79,82,83,83,82,76,73,68,61,58,53,51,46,59,59,58,51,52,59,65,70,78,84,89,84,78,78,75,71,64,57,53,48,45,63,66,61,56,54,58,63,70,85,89,87,86,88,86,82,73,66,58,52,47,41,63,66,65,63,62,61,66,77,92,95,93,86,87,87,81,74,69,60,54,48,41,59,64,63,65,65,70,70,83,96,96,90,84,84,83,77,75,66,59,52,46,38,56,60,60,66,65,71,77,82,91,92,89,78,78,80,72,67,63,58,51,44,35,51,53,56,63,66,70,78,83,92,89,86,83,79,77,69,64,63,55,49,39,26,46,44,51,57,64,68,73,81,83,89,85,88,86,81,71,67,64,57,46,31,14,42,40,55,54,65,64,71,78,82,86,83,86,90,83,75,74,67,57,41,25,8,46,40,45,58,61,67,71,78,81,81,81,89,91,86,80,75,69,54,34,16,0,49,47,45,62,62,65,73,72,76,80,73,87,86,83,80,74,67,49,28,7,0,45,46,45,56,67,69,52,63,73,71,69,79,85,84,79,72,62,45,26,4,0,41,42,46,53,60,70,66,64,59,57,65,80,83,81,77,66,56,42,22,2,0,34,35,40,46,56,63,65,64,58,57,66,69,83,81,75,62,52,39,22,4,0,30,33,40,44,54,57,62,68,61,59,61,68,75,80,72,59,48,36,20,5,0,26,34,44,48,49,50,60,62,62,59,58,62,71,77,66,55,45,33,18,1,0,26,37,42,46,47,49,58,64,60,65,58,55,62,63,55,52,46,31,16,0,0,28,36,43,46,47,51,56,67,64,60,53,44,55,51,51,47,42,28,15,5,0,30,36,43,47,47,52,57,68,62,59,52,42,54,51,50,46,42,27,15,5,0],
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

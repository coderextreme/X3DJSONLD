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
    GeoLOD(center=(41.57529309331769,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-22.x3d'],child2Url=['../../tiles/5/newport16-23.x3d'],child3Url=['../../tiles/5/newport17-22.x3d'],child4Url=['../../tiles/5/newport17-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[86,87,85,87,90,96,90,86,78,72,65,65,60,58,57,55,52,50,47,47,47,47,48,48,85,86,84,86,84,85,81,79,75,74,71,72,65,58,56,54,52,50,48,48,47,49,49,49,83,81,82,82,82,82,79,80,76,73,70,66,63,60,57,55,52,50,49,48,49,49,49,49,83,83,80,79,82,81,81,76,74,71,69,65,65,62,58,56,53,51,49,49,49,50,50,50,83,81,80,80,80,83,78,76,73,70,69,67,66,63,60,57,54,50,49,49,51,51,50,50,82,80,85,82,78,78,75,75,73,71,69,68,66,66,61,58,55,51,51,51,52,52,51,51,83,83,84,83,81,80,77,72,72,71,68,73,70,66,63,59,56,55,54,53,53,52,51,51,83,84,82,82,84,79,78,71,72,71,70,69,68,68,64,60,57,57,56,54,53,52,51,50,82,84,80,83,81,81,83,77,74,74,72,70,68,67,64,61,58,58,57,55,53,52,51,50,83,82,81,82,83,81,81,79,77,76,75,71,70,68,65,62,60,58,56,54,53,51,50,50,85,85,83,82,79,75,78,78,77,75,76,74,74,69,66,63,61,58,55,54,52,50,49,49,87,87,87,85,82,82,83,85,82,81,83,78,76,71,68,64,62,58,55,53,51,49,47,46,94,86,84,86,85,90,86,86,86,87,86,81,77,72,69,66,63,59,56,53,51,49,46,45,90,90,92,89,86,89,90,86,88,87,85,80,77,72,69,67,64,60,57,54,51,49,46,46,91,93,91,87,87,89,89,88,89,87,82,81,76,74,71,68,65,61,58,55,52,50,47,46,94,95,92,85,87,86,84,89,84,84,83,82,76,73,71,68,65,61,58,55,53,50,47,46,94,92,92,88,85,91,87,86,81,76,77,79,76,72,70,67,64,60,57,54,52,49,46,45,90,88,88,87,85,80,78,84,79,80,76,72,72,71,66,65,63,60,57,54,51,48,45,44,92,92,88,82,80,78,80,80,79,77,73,71,67,68,66,64,62,59,56,53,50,48,44,43,91,88,85,82,80,79,78,76,79,75,71,69,66,66,65,63,61,59,56,52,49,46,41,40,88,90,87,80,80,80,78,77,77,71,71,68,68,66,64,63,60,57,54,51,49,45,38,36,88,88,86,83,84,82,81,80,77,72,70,68,65,65,65,63,60,57,52,49,46,41,34,33,88,89,86,83,84,83,83,81,77,72,70,68,67,65,65,63,61,58,53,49,44,39,32,30],
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

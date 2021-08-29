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
    GeoLOD(center=(41.55915137776267,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-22.x3d'],child2Url=['../../tiles/5/newport14-23.x3d'],child3Url=['../../tiles/5/newport15-22.x3d'],child4Url=['../../tiles/5/newport15-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[79,76,74,72,71,73,71,67,65,59,57,49,54,56,54,52,51,49,47,45,43,42,44,45,76,72,74,74,73,69,70,69,67,63,60,54,55,55,53,52,51,49,47,45,44,44,46,46,80,77,73,74,70,69,71,66,63,63,59,57,57,55,53,52,51,49,46,45,45,45,46,46,77,75,73,73,77,73,70,69,65,63,62,62,59,56,53,52,50,48,46,45,45,46,46,46,72,73,79,82,91,87,80,73,68,64,61,61,56,55,54,51,49,48,46,45,46,47,46,46,76,78,80,81,80,82,76,76,68,64,62,61,57,56,54,52,50,48,46,45,45,46,46,46,76,78,78,82,79,78,76,73,69,64,64,61,58,57,55,55,53,50,48,47,45,43,44,45,73,76,79,79,76,78,79,71,71,67,65,64,59,60,59,57,55,52,50,48,47,45,41,40,74,76,78,80,83,84,78,73,67,66,65,62,59,58,57,56,54,51,49,47,47,46,46,45,81,82,80,82,82,78,77,72,69,67,65,62,60,56,54,53,50,47,45,43,44,42,42,41,81,83,79,81,83,80,75,76,73,68,62,61,61,55,51,49,46,43,40,39,39,37,35,34,78,80,80,81,83,81,80,82,78,68,60,57,57,55,52,49,46,43,39,36,34,32,30,27,80,81,83,85,82,83,79,74,73,70,65,63,57,57,54,51,47,43,39,35,27,25,20,20,81,81,85,86,84,83,77,75,74,71,68,64,61,58,56,52,50,46,40,34,31,34,32,31,81,83,85,85,85,82,80,77,75,72,68,63,62,59,57,54,51,48,42,37,36,39,41,41,81,83,85,83,84,82,80,81,79,73,69,63,62,58,55,53,50,47,43,39,39,42,43,43,81,84,86,86,87,82,80,76,77,76,73,67,61,58,54,52,49,45,42,40,42,42,43,42,87,85,91,89,87,83,80,75,74,71,69,65,62,58,55,52,49,47,43,42,43,44,45,44,88,87,86,89,85,84,81,77,75,72,69,64,63,60,57,54,52,49,45,43,43,45,45,45,90,89,87,88,87,83,83,79,78,75,70,66,62,61,59,56,53,49,45,44,46,46,46,46,91,93,87,87,86,83,81,77,77,76,75,70,64,61,59,57,53,49,46,45,46,46,46,46,87,86,87,89,87,89,88,84,78,73,71,68,64,62,60,56,53,49,47,46,47,46,46,46,86,85,86,88,89,97,92,87,79,73,64,62,59,58,57,55,53,50,47,47,47,47,48,47,86,87,85,87,90,96,90,86,78,72,65,65,60,58,57,55,52,50,47,47,47,47,48,48],
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

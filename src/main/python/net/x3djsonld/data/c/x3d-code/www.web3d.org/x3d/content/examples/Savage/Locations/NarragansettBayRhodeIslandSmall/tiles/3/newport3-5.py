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
    GeoLOD(center=(41.551080519985156,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-10.x3d'],child2Url=['../../tiles/4/newport6-11.x3d'],child3Url=['../../tiles/4/newport7-10.x3d'],child4Url=['../../tiles/4/newport7-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[55,67,68,69,68,69,66,63,63,62,62,67,65,61,60,54,51,45,39,35,31,65,70,74,78,74,71,70,69,64,61,60,67,64,60,60,60,54,47,40,34,28,62,68,76,82,83,79,77,73,66,63,64,64,66,69,65,61,54,47,39,33,26,64,71,76,81,86,88,82,75,69,65,64,64,68,68,62,57,51,45,38,35,31,59,66,72,78,83,87,86,80,72,70,67,68,64,57,55,51,48,44,37,28,25,56,61,71,70,82,84,85,84,76,73,69,66,60,54,53,48,44,39,35,35,33,54,61,67,73,78,83,86,84,79,71,68,66,65,54,55,51,48,46,43,41,38,56,64,70,75,78,83,89,87,82,77,74,70,62,59,55,52,50,47,44,43,39,61,64,69,81,79,81,84,96,84,77,74,71,64,61,57,55,51,48,46,43,37,58,66,73,77,87,80,83,90,86,80,75,68,68,61,57,54,51,48,44,39,43,57,65,69,73,76,80,81,84,78,82,75,70,72,64,53,56,52,49,44,44,46,61,60,53,62,68,75,78,82,80,80,76,71,70,63,61,54,52,48,45,46,46,56,53,53,53,53,67,69,75,72,73,77,83,78,65,60,56,52,47,46,46,45,57,53,53,53,53,60,70,73,68,70,78,77,79,71,65,59,57,51,48,42,40,55,53,53,53,53,61,64,65,71,76,82,84,75,68,63,56,52,45,42,40,33,57,53,53,53,53,65,67,71,74,78,83,84,80,74,60,56,51,42,33,24,17,58,53,53,53,69,67,76,70,76,80,83,86,80,74,66,60,54,46,33,39,37,57,59,62,66,69,73,72,76,80,81,85,86,80,77,70,58,52,44,41,43,37,53,58,64,70,71,72,77,80,84,87,88,87,81,75,67,61,55,48,44,45,41,46,54,61,65,68,72,79,81,87,91,88,87,82,77,75,62,57,49,47,46,44,45,53,61,65,68,72,80,82,86,90,87,87,83,77,74,63,57,49,47,46,44],
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

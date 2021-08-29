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
    GeoLOD(center=(41.71825065109993,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-6.x3d'],child2Url=['../../tiles/5/newport24-7.x3d'],child3Url=['../../tiles/5/newport25-6.x3d'],child4Url=['../../tiles/5/newport25-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[152,150,140,137,140,152,144,130,112,98,100,103,101,99,105,106,121,102,97,93,85,84,154,146,143,144,146,146,133,120,119,98,101,117,116,113,117,122,117,108,102,92,88,89,143,143,142,139,131,121,119,110,103,97,99,111,122,129,136,129,118,116,106,97,97,95,135,135,127,123,115,109,107,107,100,93,95,107,118,130,130,125,112,111,107,105,91,87,124,115,107,109,108,108,97,95,92,93,96,104,118,128,128,122,116,108,106,92,79,78,113,109,107,99,94,91,91,91,95,88,93,106,122,134,135,125,116,107,93,78,78,78,114,115,110,103,92,91,91,91,91,91,91,112,128,137,137,126,114,103,82,76,76,76,125,117,115,109,103,94,92,91,91,91,91,105,118,132,132,124,112,97,84,75,76,76,131,130,128,121,116,108,102,92,91,91,91,97,109,125,125,119,101,90,81,75,75,75,146,143,147,141,125,118,116,105,101,92,91,99,109,112,121,105,91,85,78,75,76,76,140,142,142,146,142,125,112,111,111,104,95,92,107,114,103,88,85,80,78,79,75,75,125,122,122,123,120,113,108,106,106,97,89,86,94,93,84,80,75,77,78,78,78,78,110,108,108,111,109,105,101,106,96,92,85,79,82,75,75,82,84,84,79,81,83,84,101,103,106,110,106,103,95,87,85,75,75,75,75,75,83,83,78,79,81,83,82,83,94,97,101,101,97,91,90,80,75,75,75,75,75,75,85,93,88,80,79,79,80,79,91,98,97,96,86,77,79,76,75,75,75,75,75,80,92,85,88,84,87,89,87,86,92,89,86,87,86,81,74,83,75,75,76,82,93,87,86,87,86,90,97,104,101,99,88,90,94,95,87,85,80,80,84,86,86,92,94,97,84,90,84,92,99,109,106,104,100,98,96,95,92,85,80,80,87,92,96,96,98,88,88,87,88,93,104,109,111,114,108,109,106,93,91,82,85,80,83,91,105,107,105,90,90,91,93,91,102,109,113,116,100,100,94,96,93,91,81,81,88,89,103,118,112,106,93,94,95,102,105,108,112,114,99,100,96,95,94,92,81,82,86,90,102,118,112,105,94,95,95,102,106,108,112,114],
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

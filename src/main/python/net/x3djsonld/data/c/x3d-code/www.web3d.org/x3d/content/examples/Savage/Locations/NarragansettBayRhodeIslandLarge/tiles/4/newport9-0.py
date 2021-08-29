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
    GeoLOD(center=(41.573110194091946,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-0.x3d'],child2Url=['../../tiles/5/newport18-1.x3d'],child3Url=['../../tiles/5/newport19-0.x3d'],child4Url=['../../tiles/5/newport19-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[125,128,129,126,119,111,102,107,110,114,108,109,108,111,108,104,104,74,56,51,52,54,120,127,125,125,110,109,108,107,108,107,104,109,119,116,106,92,71,60,56,58,60,61,115,121,124,119,113,111,110,108,110,112,111,113,116,106,85,69,62,61,64,65,69,72,127,124,123,127,125,116,111,107,114,113,118,117,108,87,70,64,71,76,80,75,79,80,123,122,131,131,127,119,110,110,115,121,123,114,90,78,78,79,79,86,87,87,89,90,122,125,129,129,122,116,113,119,124,120,119,99,77,75,82,79,82,91,93,102,104,103,124,126,133,131,123,116,122,130,125,127,111,86,76,71,81,87,94,102,110,116,122,123,126,129,129,126,120,114,121,128,139,128,95,72,73,84,92,101,106,111,114,119,125,129,126,125,123,114,111,109,113,125,124,100,78,69,84,102,102,105,107,108,118,128,128,127,135,135,128,130,125,119,106,112,97,87,81,88,101,103,106,111,114,119,126,131,124,119,142,146,142,149,148,132,110,95,91,90,96,108,110,95,100,110,110,110,116,109,98,95,144,152,158,152,147,136,119,98,97,99,104,105,103,102,100,100,94,96,92,90,86,85,150,146,145,139,133,125,117,106,105,109,109,107,102,102,100,93,85,79,82,82,84,83,148,135,123,117,115,111,118,122,120,113,106,106,106,103,102,97,91,84,76,72,73,73,119,106,107,99,89,93,113,121,123,117,106,104,105,111,107,101,94,86,78,74,70,69,89,89,89,89,89,100,108,115,115,118,115,111,112,114,112,106,93,84,76,69,70,72,89,89,89,95,103,106,112,115,119,121,119,119,120,112,106,98,91,83,74,67,64,67,89,89,89,105,118,120,127,126,125,122,121,121,117,111,100,94,87,79,75,72,70,67,89,89,89,101,117,128,134,134,129,122,122,121,112,105,97,87,82,80,79,83,78,78,89,89,89,104,122,137,136,141,132,126,126,124,111,100,91,89,87,79,76,76,87,92,110,103,101,118,140,147,152,149,140,135,127,115,103,95,91,91,84,82,79,76,95,101,112,103,101,119,141,147,153,150,141,136,127,115,103,94,91,92,85,84,79,76,94,100],
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

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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport27-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[102,101,101,102,103,106,112,117,124,130,135,129,132,141,148,157,155,158,157,155,157,158,102,102,102,102,104,106,111,115,122,127,134,130,130,133,142,147,154,150,152,159,156,155,104,103,102,103,105,108,111,115,121,126,131,130,129,127,135,139,146,149,153,154,153,154,105,104,103,103,106,110,112,115,120,125,126,128,126,128,129,132,132,139,146,153,147,146,107,105,103,102,106,109,112,115,121,124,122,126,126,122,122,127,122,126,136,142,146,146,109,105,102,100,106,110,114,116,120,120,123,124,120,118,114,111,116,115,116,123,132,132,112,106,103,97,107,111,114,114,112,112,113,116,114,111,103,96,95,104,108,114,126,127,113,108,103,95,99,100,105,110,107,109,107,104,103,101,97,86,86,86,100,106,117,118,112,108,105,105,102,98,88,99,101,97,98,94,97,97,88,86,86,86,86,89,104,105,115,112,111,113,111,103,95,87,89,93,89,89,87,86,86,86,86,86,86,86,88,90,118,114,114,115,112,107,98,87,85,85,85,85,86,86,86,86,86,86,86,86,86,86,122,113,110,110,107,103,95,87,85,85,85,86,86,86,85,86,86,86,86,86,86,86,117,110,103,102,100,96,85,85,85,85,85,86,86,86,85,86,86,86,86,86,86,86,107,102,97,93,87,85,85,85,85,86,86,86,86,86,85,85,86,86,86,86,86,86,95,90,87,86,85,85,85,85,85,86,86,87,86,85,94,89,86,86,86,86,86,86,92,85,85,85,85,85,85,85,86,86,87,88,93,100,100,95,86,85,86,86,86,86,93,86,85,85,85,85,85,85,86,86,88,90,96,99,100,101,90,85,86,86,86,86,86,85,85,85,85,85,85,85,86,87,88,90,94,98,102,97,93,85,86,86,86,86,85,85,85,85,85,85,85,85,88,99,102,101,99,101,104,100,85,84,86,86,86,86,85,85,85,85,85,86,87,92,86,100,108,109,106,103,100,95,84,84,86,86,86,86,85,85,85,86,88,90,96,100,95,95,105,111,109,105,103,95,84,84,86,86,86,86,85,85,85,86,90,96,98,106,106,105,114,115,110,110,105,91,88,87,86,86,86,86,85,85,86,92,97,101,106,111,115,115,112,107,106,111,102,97,100,100,86,86,86,86,85,85,88,95,99,102,106,112,117,116,113,106,106,110,103,97,103,98,86,86,86,86],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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

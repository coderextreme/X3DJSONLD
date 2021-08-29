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
        texture=ImageTexture(url=['../../images/4/Malacca1-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[269,161,464,392,309,383,210,233,132,99,85,94,96,66,73,70,72,68,62,61,57,69,140,281,143,151,320,332,261,105,82,68,76,64,62,62,70,73,59,83,57,65,61,58,131,319,188,255,299,100,89,88,88,90,61,72,64,58,68,63,65,66,60,54,50,58,310,213,317,127,94,97,73,71,72,74,76,69,73,71,57,52,62,59,53,57,63,52,229,246,125,96,95,89,89,88,81,72,72,66,72,64,86,46,60,57,48,56,65,51,227,111,102,113,95,85,89,86,82,72,64,62,57,65,54,48,64,59,54,51,49,53,133,115,109,109,102,98,100,80,70,75,71,61,57,63,56,47,49,57,53,49,49,45,125,120,115,109,98,98,82,78,80,76,74,58,67,57,65,53,52,55,58,66,54,48,118,108,104,105,102,95,104,89,80,77,69,63,68,56,52,61,61,54,47,75,57,54,100,106,98,94,92,83,94,86,82,75,77,67,61,65,61,63,58,48,52,62,48,67,105,101,100,101,94,89,93,94,83,87,88,76,63,60,58,52,54,51,50,41,42,41,111,88,87,96,94,91,82,84,83,83,68,64,73,67,57,47,60,44,41,36,53,66,126,113,99,79,91,105,77,70,81,71,67,62,67,50,56,55,52,52,53,62,81,44,112,113,105,76,82,90,108,92,69,86,82,83,61,53,58,60,51,57,48,59,46,33,90,69,87,73,62,64,68,64,55,62,60,72,60,57,52,58,68,61,52,49,35,37,93,92,91,104,88,76,72,65,73,60,74,60,63,58,48,45,45,40,58,56,51,41,98,101,91,103,89,83,74,76,84,74,62,60,47,58,67,66,73,53,50,56,45,40,121,102,99,95,102,91,85,85,70,71,62,64,58,64,64,78,64,48,50,44,41,41,106,107,105,77,80,83,81,68,70,82,93,95,93,90,75,75,54,48,61,43,40,38,98,95,87,81,78,72,83,69,74,71,77,97,76,66,62,56,51,59,46,42,38,38,97,84,88,84,92,83,84,85,75,74,91,80,71,64,58,53,58,60,44,41,39,36,95,96,89,97,91,83,105,116,87,69,61,73,63,58,55,51,51,48,44,42,40,38,99,97,84,95,92,85,99,112,83,68,61,74,62,59,55,51,51,49,45,41,39,38],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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

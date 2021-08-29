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
        texture=ImageTexture(url=['../../images/4/Malacca8-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[86,61,68,51,59,40,51,59,79,90,66,82,62,63,59,57,58,59,37,43,32,21,51,58,69,71,49,67,73,59,63,97,77,85,53,51,47,65,56,73,53,47,21,30,64,68,64,70,31,58,69,59,68,100,83,80,47,69,52,87,73,75,49,94,30,34,64,46,40,54,43,77,58,75,92,118,86,79,67,52,51,56,94,208,61,67,50,63,55,60,58,49,34,61,58,76,117,112,103,75,71,41,80,63,53,77,70,93,58,102,43,56,47,40,54,57,75,62,60,196,94,75,71,62,99,89,57,65,160,135,69,222,41,73,65,34,46,55,47,56,92,207,196,376,82,64,82,72,103,183,144,88,53,220,40,46,50,49,49,65,73,61,82,203,161,219,299,112,162,120,98,94,48,42,78,277,32,51,54,47,52,53,81,70,71,69,103,126,182,284,287,199,143,52,139,92,73,286,65,53,37,42,72,67,81,62,63,82,129,171,161,202,160,199,96,133,54,56,54,245,56,47,53,57,75,56,91,70,73,71,162,272,334,250,77,72,65,60,45,65,105,176,49,52,35,58,65,70,90,63,92,76,215,133,196,89,77,81,79,59,51,59,194,256,36,37,65,51,58,77,151,77,128,90,224,109,54,52,47,67,72,122,45,35,77,126,34,49,62,66,66,69,269,160,176,110,194,103,56,71,55,62,56,83,65,50,142,102,28,55,47,49,44,59,345,136,211,194,172,94,69,56,52,51,67,45,68,84,74,70,57,31,34,39,76,53,348,143,392,186,149,248,73,60,70,62,85,124,79,64,66,85,26,33,48,60,105,53,68,379,452,380,256,171,75,70,54,82,209,149,66,55,88,136,42,43,24,43,99,62,67,345,402,259,443,202,59,52,73,118,279,51,52,54,88,117,42,28,52,34,39,45,66,168,136,225,476,198,71,91,117,232,158,55,48,51,50,56,48,34,42,48,52,59,55,66,63,138,310,133,91,258,128,380,119,119,41,49,48,45,33,40,75,48,51,72,77,53,58,67,274,110,201,258,210,233,238,255,125,162,49,42,50,28,55,48,53,62,75,46,47,114,211,326,365,461,283,317,396,181,283,159,43,40,55,30,46,42,57,68,66,49,48,135,233,315,347,477,310,336,390,162,310,132,39,38],
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

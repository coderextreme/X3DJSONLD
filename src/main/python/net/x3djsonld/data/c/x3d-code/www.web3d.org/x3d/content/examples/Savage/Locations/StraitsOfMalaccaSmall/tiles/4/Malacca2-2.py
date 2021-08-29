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
        texture=ImageTexture(url=['../../images/4/Malacca2-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[482,632,502,412,237,224,146,108,117,146,207,202,190,178,148,153,160,150,99,102,94,99,649,529,486,405,292,194,176,111,119,191,197,206,183,182,177,120,135,116,126,118,120,108,491,398,523,400,348,345,221,90,115,197,198,194,185,167,166,145,127,153,159,137,157,126,553,347,645,505,398,248,208,106,146,192,196,187,134,168,163,146,174,193,171,149,166,189,315,468,571,424,317,257,95,122,141,179,172,155,162,178,186,173,180,160,149,149,151,149,329,807,504,427,280,240,93,111,157,184,219,200,163,242,203,180,157,191,192,164,145,124,485,554,451,353,182,99,92,105,139,135,254,244,236,191,234,175,183,206,193,158,185,164,543,318,265,239,127,97,80,96,123,133,188,262,257,260,230,182,150,157,161,146,164,140,322,222,147,96,82,100,79,89,124,128,212,194,158,175,208,173,126,165,169,116,133,152,185,159,96,96,70,93,68,104,134,146,147,205,141,135,166,145,134,143,108,130,132,125,228,111,87,120,72,94,66,94,112,131,140,163,161,172,187,167,159,133,141,109,102,92,116,97,109,101,87,57,70,91,130,118,146,117,117,161,201,171,159,122,104,96,95,94,142,148,96,111,78,60,68,80,116,108,110,98,103,104,169,150,137,127,108,122,122,108,117,152,128,108,120,79,55,72,77,97,94,91,79,105,122,136,139,141,124,104,134,137,89,86,133,118,101,97,56,63,74,81,72,78,93,94,109,152,132,148,139,114,135,118,92,94,127,138,83,85,92,50,59,66,80,69,81,90,116,112,103,99,165,98,128,89,93,102,73,70,81,63,53,51,53,85,70,57,70,82,98,90,84,110,83,77,100,85,72,77,86,56,54,73,72,54,58,50,69,54,57,74,65,97,98,102,96,73,83,85,81,78,80,57,66,101,93,85,60,45,47,42,67,62,73,80,74,89,74,65,78,73,94,81,74,61,87,86,87,86,75,48,50,42,38,46,84,81,62,58,61,73,81,71,102,88,65,91,96,83,64,55,68,62,55,47,40,45,63,73,76,56,51,53,93,80,103,94,73,100,90,78,73,73,78,76,60,52,44,39,48,85,55,43,53,67,100,94,100,96,74,98,94,80,69,75,80,74,58,51,46,39,41,77,52,44,50,71,89,91],
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

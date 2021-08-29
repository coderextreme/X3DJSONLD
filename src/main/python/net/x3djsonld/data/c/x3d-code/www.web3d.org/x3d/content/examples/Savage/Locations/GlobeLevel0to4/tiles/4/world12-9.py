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
        texture=ImageTexture(url=['../../images/4/world12-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,22.458339368270288,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[289,507,298,356,525,139,-110,-1915,-1965,-2006,-2150,-2205,-2187,-2170,-2162,-2122,-2036,-477,778,1827,3054,813,166,778,106,40,238,281,150,-316,-1340,-1861,-2075,-2096,-2181,-2159,-2177,-2074,-1903,1273,2272,2158,1130,256,929,35,48,88,15,119,78,-63,-209,-1324,-1762,-2017,-2181,-2102,-2080,-2037,-65,1282,1142,921,439,189,282,139,182,182,87,48,97,-70,-77,-917,-1039,409,-1453,-1283,-1333,-136,144,278,531,501,253,195,550,277,472,413,176,42,68,13,-45,-160,-151,43,330,-1,-46,3,22,98,290,447,182,119,180,480,1779,2238,1032,71,88,1,-22,-45,-5,73,16,-3,-8,5,25,96,104,218,119,108,249,371,447,584,574,129,185,18,-38,-19,-8,3,2,-36,-21,-3,14,75,48,59,11,71,98,1060,309,560,1169,319,75,103,62,-23,6,29,27,-102,-26,15,35,62,109,24,111,90,110,542,287,858,491,258,240,18,104,40,52,13,76,76,78,-31,36,85,8,120,99,143,117,212,422,1023,416,141,100,99,130,63,85,89,13,71,185,155,79,93,20,84,127,145,104,116,359,821,326,113,258,165,164,168,88,92,139,116,98,153,106,178,98,63,58,111,132,201,1138,292,296,267,188,240,191,195,163,166,54,71,183,193,89,163,99,55,30,78,206,797,402,255,285,293,278,257,169,224,139,73,96,148,169,89,152,143,123,72,179,82,493,448,249,299,327,317,236,242,221,96,110,99,106,142,95,136,65,193,169,179,48,55,269,182,332,241,291,264,258,196,178,87,108,97,96,208,102,114,128,159,168,148,153,173,162,214,251,243,226,224,226,170,165,120,102,165,206,166,176,158,179,122,202,77,147,211,198,236,179,180,192,194,196,162,106,114,141,172,160,197,234,202,119,117,188,146,167,166,119,147,168,192,151,150,165,142,104,106,119,168,157,220,184,205,94,155,110,133,173,200,141,146,146,146,134,126,127,147,127,147,156,152,196,224,239,192,134,158,168,120,144,224,99,172,146,141,153,137,152,146,140,131,172,140,182,227,225,144,201,124,154,180,207,151,109,119,156,187,185,169,165,134,143,132,197,192,213,198,164,217,181,153,170,184,203,221,129,135,135,123,161,179,177,151,135,180,167,155,191,203,227,250,184,140,145,179,214,228,125,144,91,160,149,296,163,189,194,192,188,215,215,161,277,207,189,120,175,164,193,144,118,178,129,155,157,282,178,183,170,206,177,212,219,143,212,213,205,117,151,156,195,184],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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

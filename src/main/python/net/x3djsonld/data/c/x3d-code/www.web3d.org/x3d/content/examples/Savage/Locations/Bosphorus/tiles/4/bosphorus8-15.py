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
        texture=ImageTexture(url=['../../images/4/bosphorus8-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[239,264,265,255,225,211,187,203,186,189,166,157,122,78,89,70,78,107,82,54,66,80,236,239,240,258,218,195,155,186,157,187,142,184,162,74,60,61,171,182,121,80,135,156,232,229,219,220,186,149,128,179,102,177,89,120,139,85,98,88,191,214,150,119,167,191,241,242,191,204,146,184,172,98,98,136,121,57,71,65,69,141,181,207,197,174,175,173,235,248,191,196,190,201,140,126,83,77,64,57,69,88,102,173,152,173,144,191,143,134,227,233,230,231,221,206,198,188,173,158,117,58,55,87,82,145,118,151,112,181,153,143,254,243,208,217,265,198,171,185,163,159,114,84,60,63,53,137,128,87,144,139,71,65,229,218,199,213,204,192,141,197,154,129,136,150,100,93,44,108,158,64,135,75,93,98,198,180,177,181,165,153,122,185,139,91,101,154,150,112,53,92,141,61,75,59,132,145,237,173,174,135,173,156,93,161,140,112,71,93,151,96,56,63,69,68,78,92,95,108,194,212,150,142,164,124,73,143,142,147,85,62,95,69,68,65,62,59,119,137,149,148,195,202,146,148,141,146,63,102,104,127,146,117,60,55,61,61,58,65,138,90,74,75,205,196,165,145,100,159,95,60,73,71,169,144,66,55,88,84,92,129,70,85,96,88,146,178,131,116,100,147,121,81,62,108,161,126,74,55,80,122,73,64,96,127,139,132,115,164,185,119,82,83,164,88,64,87,147,69,56,55,68,74,80,141,132,190,192,196,93,132,178,139,148,68,170,146,83,53,56,60,77,63,59,59,61,97,122,117,175,191,105,144,160,111,83,64,124,106,63,60,60,64,87,77,101,72,80,71,87,128,194,186,72,153,139,125,141,93,98,117,59,65,67,89,102,96,133,89,137,79,162,167,153,133,70,70,80,72,136,107,55,59,49,50,103,141,143,112,142,95,133,130,159,174,118,106,111,71,75,65,64,107,96,80,54,53,142,157,158,151,158,145,148,187,188,141,100,114,160,151,156,122,120,64,112,106,54,83,114,153,152,114,107,140,172,136,172,155,100,101,153,156,149,167,139,64,64,102,55,73,124,114,135,80,118,132,127,121,181,142,91,113,143,140,129,150,123,57,80,90,52,58,136,95,96,82,88,89,86,128,187,122,79,94,138,139,127,148,109,58,77,83,53,56,138,98,88,88,84,81,90,131,186,123,77,92],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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

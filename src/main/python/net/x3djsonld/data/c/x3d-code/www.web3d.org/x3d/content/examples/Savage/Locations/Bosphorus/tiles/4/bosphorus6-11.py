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
        texture=ImageTexture(url=['../../images/4/bosphorus6-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[367,326,295,271,263,215,190,178,188,176,163,161,157,153,130,124,130,121,141,169,174,162,296,287,249,274,231,233,200,166,175,175,167,149,139,148,145,122,121,110,126,152,174,172,264,271,219,213,205,200,190,173,151,166,157,147,137,131,136,137,109,103,124,185,200,190,205,217,191,180,194,189,175,171,160,146,152,134,126,116,119,132,124,98,114,146,209,200,177,176,183,173,182,177,157,158,149,129,135,122,110,105,102,101,94,93,98,111,181,191,162,166,181,165,171,161,150,148,142,122,117,112,122,131,120,135,136,97,89,92,125,151,150,172,161,161,153,149,141,132,126,122,121,142,174,165,128,171,148,125,110,82,117,126,151,151,145,154,142,141,138,130,129,136,143,182,201,157,157,161,137,145,135,97,81,87,139,131,132,138,134,135,131,143,147,147,169,218,197,159,184,163,152,143,129,101,92,90,127,119,119,127,127,126,128,145,157,177,208,246,186,208,197,165,146,138,123,103,86,82,112,113,118,118,125,121,130,143,166,193,263,258,230,237,203,174,176,166,138,126,90,99,110,106,110,113,117,118,136,152,166,193,261,284,254,212,190,176,151,140,129,117,123,131,107,103,104,111,109,125,131,149,173,184,242,321,274,252,225,174,149,171,156,160,145,140,103,101,102,102,111,125,145,159,168,183,242,320,270,217,214,178,172,204,193,189,157,145,104,98,99,99,111,121,140,146,167,199,257,241,263,207,192,181,200,240,217,204,167,165,100,106,96,100,111,112,126,148,169,196,203,193,241,213,188,194,232,264,209,182,154,147,100,99,97,100,110,111,126,144,150,165,169,175,207,187,170,184,203,238,193,188,160,158,97,95,94,97,113,108,120,138,135,155,158,177,167,162,155,152,202,251,195,157,155,157,119,101,90,95,122,111,115,126,131,139,148,148,140,143,124,162,201,205,185,155,133,138,121,102,90,97,123,109,106,117,118,126,133,128,120,119,113,152,164,175,151,142,121,123,125,109,94,93,129,110,104,108,115,111,116,123,111,106,104,125,127,127,125,119,112,112,109,118,104,91,133,109,100,102,106,104,107,121,131,99,95,106,96,100,111,101,101,97,112,111,98,91,119,110,101,100,99,102,102,107,120,109,88,87,88,89,101,107,87,100,110,116,99,92,115,110,101,99,98,102,102,106,118,111,87,83,88,89,97,108,87,102],
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

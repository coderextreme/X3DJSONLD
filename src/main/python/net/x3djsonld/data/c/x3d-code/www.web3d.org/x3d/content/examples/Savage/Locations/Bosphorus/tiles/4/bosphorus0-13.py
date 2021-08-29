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
        texture=ImageTexture(url=['../../images/4/bosphorus0-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[139,169,172,137,107,99,138,145,121,122,124,162,204,234,217,210,186,170,156,135,136,134,152,182,163,118,91,114,150,113,99,106,126,162,191,229,214,241,216,205,183,145,119,114,145,174,142,82,111,139,113,89,133,157,127,153,198,226,210,245,216,184,201,158,117,113,129,147,101,80,120,100,82,119,134,180,152,193,217,222,219,240,215,181,178,159,110,101,119,113,82,78,78,81,107,144,173,198,174,213,233,205,227,245,202,172,139,136,102,94,98,65,61,64,69,100,122,175,203,224,208,217,225,199,231,252,216,183,136,130,124,134,67,59,85,83,97,83,128,141,171,219,227,214,240,204,243,277,243,177,151,195,201,201,53,80,121,127,133,109,99,132,170,228,252,220,253,193,249,264,218,174,165,227,190,185,57,67,91,128,157,145,114,136,167,215,220,193,234,196,249,283,258,231,198,229,192,180,99,91,90,90,127,175,157,186,212,228,236,190,178,230,318,308,261,219,227,251,246,233,122,139,124,122,134,176,197,190,199,205,204,209,183,249,300,308,244,203,234,252,254,256,120,167,160,146,153,165,201,184,199,147,183,251,166,233,282,276,218,262,234,244,267,276,113,144,172,181,182,168,162,171,181,125,172,251,158,199,251,230,186,294,296,237,276,285,115,129,147,188,202,165,143,192,110,184,197,194,202,185,243,211,176,242,320,267,276,287,129,142,192,201,202,159,141,197,96,171,236,141,138,229,223,158,204,241,284,305,300,297,142,170,215,259,186,184,224,155,106,146,187,167,129,167,160,136,205,243,256,298,308,297,161,184,214,203,171,218,260,154,116,78,142,136,79,121,122,134,161,211,245,242,227,232,167,196,236,222,189,182,238,250,168,101,97,143,88,77,117,144,119,175,213,220,226,233,191,236,258,228,191,154,239,249,236,143,105,165,125,61,103,131,116,161,155,172,208,208,177,225,263,241,241,114,199,221,220,200,70,132,162,106,78,126,95,116,98,134,171,171,118,199,241,228,162,112,226,204,192,198,121,110,175,157,63,139,115,75,77,96,137,163,56,93,156,151,98,163,207,176,138,170,141,75,161,134,62,149,139,118,49,57,131,138,38,31,44,70,65,114,125,116,103,123,107,96,145,126,64,106,101,104,61,49,80,88,32,28,33,61,62,102,108,106,93,112,103,92,137,130,59,94,97,99,62,49,76,81],
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

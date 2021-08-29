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
        texture=ImageTexture(url=['../../images/4/bosphorus7-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[110,116,99,92,115,110,101,99,98,102,102,106,118,111,87,83,88,89,97,108,87,102,111,110,117,105,96,116,110,101,97,97,97,100,108,98,90,91,74,88,87,90,88,100,120,137,144,128,86,112,116,116,105,95,94,92,95,103,100,102,84,69,86,81,87,91,133,173,180,124,97,94,108,102,102,112,110,107,92,114,142,127,105,88,66,63,88,85,149,193,184,119,82,101,102,81,100,107,123,129,95,96,148,155,94,101,80,62,84,77,161,200,180,116,84,84,76,84,81,78,87,77,89,70,82,86,68,79,77,65,66,64,147,184,148,128,89,93,86,106,87,86,105,140,153,132,110,106,100,69,55,60,58,60,144,141,129,118,99,101,80,117,117,88,165,218,222,220,185,149,122,94,63,69,87,80,129,133,118,112,105,83,85,108,145,97,121,156,175,166,142,121,107,72,89,96,79,87,114,139,117,120,123,92,95,98,132,118,130,146,160,142,124,108,87,88,112,102,89,91,97,112,96,93,102,84,117,120,115,138,147,161,175,167,143,122,116,109,129,119,103,96,120,141,129,102,100,114,128,143,137,155,166,176,166,145,138,124,133,129,141,135,127,125,130,191,143,113,137,126,152,145,145,161,178,178,165,174,169,149,163,142,148,134,154,146,150,182,137,131,147,158,154,149,148,163,209,204,221,235,247,206,192,198,185,187,160,153,151,173,142,145,135,151,158,161,163,183,234,247,298,344,309,259,244,253,231,184,155,144,160,201,157,150,148,161,166,176,183,209,262,294,340,372,328,320,316,283,221,208,169,164,165,201,172,173,171,180,178,177,182,197,234,281,312,296,268,257,256,264,217,184,161,153,182,198,188,187,188,191,180,168,176,197,226,235,236,240,254,226,214,213,209,200,205,190,186,193,178,182,195,185,173,166,186,188,189,201,218,251,259,250,237,192,171,167,195,175,181,187,175,182,189,182,167,170,190,166,211,220,255,342,306,300,263,224,191,162,135,137,187,173,165,174,183,172,160,170,162,165,209,243,278,333,287,240,222,190,176,163,159,159,164,159,150,162,181,164,161,142,154,181,201,210,247,269,236,208,200,186,148,136,137,133,147,138,154,138,161,159,172,134,169,184,177,207,228,239,221,181,192,161,168,154,105,108,151,143,149,137,161,159,173,132,173,181,172,205,224,236,225,177,188,156,170,163,104,104],
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

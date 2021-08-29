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
        texture=ImageTexture(url=['../../images/4/bosphorus10-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.956771138722615,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[100,95,132,107,119,124,151,143,162,171,126,122,115,84,108,71,34,51,58,71,85,99,64,102,121,101,98,123,152,148,166,148,117,127,87,55,43,43,50,70,96,106,138,162,74,89,101,96,130,117,142,156,143,143,112,99,72,50,68,91,60,131,158,159,218,222,95,72,87,121,149,144,126,153,148,140,111,101,66,75,99,91,82,124,182,205,206,193,82,85,103,113,122,136,150,165,156,140,114,119,74,83,133,115,102,152,184,222,164,144,89,82,102,126,125,145,153,169,135,134,117,129,83,115,182,124,160,182,209,220,180,159,107,84,118,106,144,137,137,172,143,148,115,127,121,129,206,183,184,194,231,210,141,113,107,101,89,124,139,145,137,145,165,139,119,140,159,109,195,214,223,220,209,211,158,117,131,133,84,109,135,124,111,136,164,146,139,154,185,171,149,193,226,201,179,151,139,157,134,117,89,87,104,104,110,123,155,174,166,179,167,208,162,185,226,226,219,162,184,205,127,103,96,102,88,116,121,137,175,164,180,193,172,201,218,176,189,218,220,190,169,179,120,112,101,118,103,116,145,181,174,171,181,198,184,184,224,208,205,163,185,222,195,198,108,99,94,135,120,164,183,197,170,193,185,184,203,194,204,176,161,134,187,193,172,175,119,133,111,163,154,138,171,205,185,193,163,182,202,163,151,118,112,135,171,132,134,136,149,151,117,154,179,148,191,205,192,201,168,188,201,200,187,149,93,115,127,98,118,128,165,144,116,144,173,161,184,203,213,214,182,176,190,200,183,134,96,89,106,83,100,100,159,139,121,134,142,191,190,195,222,205,196,204,184,202,165,114,98,78,67,73,76,85,175,168,140,127,167,153,170,184,206,199,200,186,197,178,160,140,106,101,79,57,69,84,184,164,141,117,135,155,193,199,163,193,191,181,180,176,145,110,135,119,90,77,55,60,168,162,138,143,141,174,198,181,153,182,179,132,164,176,168,122,135,138,120,100,65,56,181,181,163,153,162,157,182,181,114,180,151,103,146,156,174,129,84,102,130,122,85,74,188,162,142,142,179,148,136,166,124,161,126,114,124,180,146,141,101,72,99,123,103,96,194,163,141,160,158,153,111,103,131,89,129,72,141,154,104,110,122,93,61,74,98,82,194,162,142,160,157,141,105,95,110,100,122,71,142,147,103,105,122,97,62,67,87,79],
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

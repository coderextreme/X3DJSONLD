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
        texture=ImageTexture(url=['../../images/4/bosphorus9-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[68,98,119,114,138,110,128,133,108,82,111,133,114,103,124,142,156,160,149,145,130,125,28,65,104,136,145,126,131,131,114,87,107,129,95,97,126,139,153,166,149,147,144,136,24,66,115,143,152,135,138,123,100,108,113,133,98,135,100,130,145,164,157,152,157,152,30,65,113,125,150,138,134,117,101,108,124,134,71,146,129,107,145,152,165,164,164,155,26,63,84,111,139,131,113,107,104,104,119,137,80,110,147,110,126,158,158,165,163,160,17,35,73,103,138,134,127,127,109,112,138,137,139,149,146,136,130,142,143,144,171,175,27,41,87,110,138,138,139,125,112,119,142,158,146,159,140,142,114,125,148,164,185,192,26,52,68,109,139,151,143,122,142,116,132,153,167,170,138,146,126,162,174,159,196,198,30,75,119,120,140,149,148,143,155,127,133,159,168,163,141,170,143,163,188,182,186,191,43,50,127,132,137,139,150,158,167,146,139,137,151,169,150,174,165,153,188,199,189,191,73,39,62,87,104,124,122,159,163,158,167,143,158,184,156,176,180,157,171,204,211,206,71,20,32,30,72,102,137,132,158,165,170,170,172,187,176,168,194,179,196,198,217,220,91,48,65,32,71,100,107,133,158,164,181,178,158,187,186,192,187,199,217,210,220,223,53,102,83,42,52,72,138,117,151,154,159,186,182,180,199,194,208,209,224,222,208,205,113,107,101,32,29,40,56,132,142,128,145,195,200,180,203,203,220,224,227,219,189,182,90,64,47,30,92,108,39,105,144,115,179,188,188,195,212,209,227,236,211,200,199,203,118,121,43,28,119,128,51,86,104,142,173,142,181,206,207,222,225,222,216,181,175,184,121,80,38,43,88,136,97,82,62,115,169,141,181,175,212,223,211,215,185,185,173,169,85,31,33,91,111,134,69,130,82,98,92,106,133,186,192,222,215,182,180,144,138,149,63,37,102,66,112,134,77,133,117,118,105,164,144,141,197,218,215,189,147,151,113,116,34,57,124,134,120,144,77,150,113,165,130,150,190,189,196,207,173,203,184,120,133,129,37,68,138,133,168,155,90,144,132,193,145,188,196,190,217,193,135,177,174,142,93,86,113,82,103,147,172,126,125,140,146,199,175,189,183,182,202,157,110,141,165,149,84,87,125,89,92,143,172,129,126,141,149,199,175,186,180,184,204,154,106,132,159,165,86,84],
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

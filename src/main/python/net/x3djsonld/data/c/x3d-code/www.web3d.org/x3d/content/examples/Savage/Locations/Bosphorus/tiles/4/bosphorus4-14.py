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
        texture=ImageTexture(url=['../../images/4/bosphorus4-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[121,161,163,164,142,98,115,104,82,66,119,99,144,97,175,168,162,181,216,214,218,219,141,161,176,173,156,104,138,135,118,74,126,124,152,119,170,153,170,195,206,221,218,221,154,172,185,182,138,148,148,146,123,88,122,156,129,121,142,158,174,205,194,204,220,221,165,171,189,162,155,175,181,163,154,123,132,160,135,135,145,149,156,172,205,215,211,212,164,166,185,183,186,191,187,187,164,152,146,160,135,121,124,150,167,196,219,229,221,221,172,175,181,186,191,195,186,181,169,156,163,161,168,146,113,138,157,195,217,233,229,228,181,182,188,186,184,186,185,179,176,171,182,173,155,141,119,144,175,194,225,239,237,236,191,180,191,177,170,168,191,167,182,174,173,181,163,148,117,157,179,220,231,242,249,248,205,194,186,182,187,175,164,155,152,161,159,170,180,171,119,144,176,199,212,250,258,254,221,192,184,189,184,178,192,179,157,150,153,145,147,149,137,163,175,184,221,242,249,251,208,198,192,199,183,188,202,183,170,166,173,183,155,127,127,172,200,197,208,235,265,263,219,213,213,204,193,201,201,187,200,189,186,179,179,132,140,164,167,174,203,208,238,246,261,231,238,216,209,224,200,208,194,192,193,201,174,133,155,155,163,161,175,194,221,228,247,255,269,239,231,226,215,198,185,172,172,183,187,148,154,153,146,164,188,205,215,210,240,268,256,251,252,245,222,208,204,178,164,158,156,146,144,156,171,155,174,187,182,184,250,257,262,258,259,247,223,214,218,197,190,167,168,166,156,153,178,176,166,167,205,208,252,263,279,267,257,239,222,212,218,223,208,187,182,150,164,168,181,187,189,184,177,184,265,261,276,285,259,241,233,211,206,211,209,194,171,154,182,181,167,192,204,204,198,197,296,265,272,293,268,256,234,212,194,193,203,180,175,156,186,198,189,185,182,203,228,228,283,271,287,300,273,247,238,221,209,194,180,170,163,163,175,193,214,220,202,191,216,223,294,261,287,285,266,238,220,220,216,204,187,172,180,170,180,208,226,245,239,216,212,219,272,253,286,306,271,244,212,221,219,214,198,188,208,185,184,199,218,249,260,251,220,219,248,250,275,300,297,251,216,194,203,217,203,198,219,197,187,197,226,253,288,261,251,250,244,252,273,302,297,248,216,193,200,218,205,201,220,200,187,200,231,254,289,261,251,249],
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

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
        texture=ImageTexture(url=['../../images/4/bosphorus7-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.55022386869132,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[227,202,180,188,171,224,244,200,230,278,286,295,296,265,323,347,319,291,321,280,255,248,229,202,186,179,168,185,244,190,233,248,250,283,251,272,301,332,314,283,304,278,250,241,196,204,169,163,175,197,240,186,219,233,239,265,260,300,305,311,312,266,277,272,272,258,187,157,161,164,168,178,222,190,227,209,248,228,243,268,283,303,308,271,225,229,269,253,176,165,192,168,207,170,192,196,197,244,216,255,269,291,301,309,297,262,236,201,198,196,180,179,205,190,194,210,208,215,232,259,228,254,273,295,311,299,297,289,264,255,229,225,194,183,218,231,189,223,236,260,275,272,251,242,253,263,295,290,297,323,289,285,230,217,188,164,188,236,235,223,245,275,274,281,280,273,283,288,291,274,299,308,279,247,204,204,181,153,198,216,243,236,261,256,250,259,261,261,265,279,295,265,305,306,257,267,255,250,220,159,184,176,217,247,261,266,248,228,233,234,254,294,296,261,285,289,280,274,231,225,157,146,185,200,247,259,242,257,252,221,243,240,275,287,273,264,266,269,253,270,253,243,145,180,207,207,218,260,226,229,224,220,239,258,270,255,244,254,267,255,215,244,189,172,186,216,226,231,249,250,234,224,205,230,233,224,229,240,268,279,259,198,178,166,174,153,195,218,178,213,237,211,204,185,204,212,246,250,261,252,276,283,242,198,246,196,141,127,176,157,180,193,221,188,202,214,236,228,266,266,277,273,278,280,244,240,273,223,152,139,213,196,216,190,168,188,197,222,250,253,260,261,274,236,242,278,256,258,241,217,189,192,222,224,238,214,208,195,220,234,236,253,260,231,250,207,210,235,216,221,223,209,233,229,232,245,252,235,235,217,238,252,259,260,223,208,187,228,162,220,220,201,159,159,222,238,207,231,252,270,261,227,251,249,258,255,236,206,156,152,167,218,209,214,148,149,178,164,230,236,264,279,261,241,245,225,217,240,237,207,191,124,199,205,176,173,177,90,76,60,213,231,264,269,242,249,217,217,196,216,228,166,117,126,190,134,137,92,129,108,53,56,214,241,260,261,238,230,198,221,185,201,217,163,142,95,191,122,102,64,61,85,57,63,241,261,269,253,219,216,189,206,183,185,171,154,111,78,101,70,67,101,73,54,60,70,239,264,265,255,225,211,187,203,186,189,166,157,122,78,89,70,78,107,82,54,66,80],
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

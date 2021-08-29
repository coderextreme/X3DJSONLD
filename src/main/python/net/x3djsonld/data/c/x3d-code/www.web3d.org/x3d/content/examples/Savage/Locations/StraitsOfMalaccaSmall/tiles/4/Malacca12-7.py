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
        texture=ImageTexture(url=['../../images/4/Malacca12-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[219,217,235,131,177,113,121,131,233,142,117,94,163,108,100,136,123,124,108,108,113,130,309,305,298,113,117,126,134,389,360,184,99,87,154,124,143,162,123,108,122,106,111,126,246,230,194,198,128,126,123,257,380,146,189,100,128,180,132,254,243,119,123,167,114,118,148,223,208,199,154,146,119,116,158,137,129,94,136,130,294,615,443,123,105,253,131,147,217,151,237,181,161,124,172,123,158,139,201,107,135,142,368,726,501,120,100,116,132,192,206,129,283,295,177,126,163,156,153,154,141,93,137,154,249,642,500,208,107,145,176,140,172,141,284,245,162,141,169,169,208,154,184,144,139,201,233,613,452,148,109,134,156,136,211,193,319,301,154,115,155,199,162,149,172,126,111,137,267,425,374,153,119,208,144,173,246,209,241,638,158,135,186,169,172,161,125,125,146,125,117,321,645,146,116,213,146,153,249,275,291,634,144,153,197,157,209,135,126,114,108,133,130,129,427,260,176,232,199,169,259,273,255,636,161,162,169,209,155,252,204,113,136,150,139,182,255,307,168,331,252,227,318,267,304,465,204,175,135,168,168,155,278,173,131,138,121,264,220,248,253,203,210,278,445,257,321,310,202,174,146,195,196,150,300,162,124,165,143,161,146,177,191,197,238,193,476,322,248,409,164,169,180,153,160,194,301,305,125,172,174,146,142,207,192,163,224,211,636,330,261,483,163,227,181,203,210,225,344,352,306,333,177,172,159,176,173,190,228,243,382,309,211,370,281,172,196,184,227,297,253,380,591,250,162,199,163,174,153,211,225,283,401,254,236,185,218,174,192,197,320,305,272,505,639,211,180,191,154,170,209,237,219,292,524,326,189,210,193,181,188,180,253,311,424,451,330,350,192,202,171,159,176,222,236,262,507,398,274,248,193,176,267,199,220,380,507,347,268,302,175,218,165,177,191,205,336,226,493,418,395,210,184,174,187,201,234,356,507,444,273,384,169,223,177,179,215,219,191,203,468,357,390,387,195,163,179,207,295,633,605,480,303,204,160,139,200,211,199,208,175,216,382,362,387,380,238,211,211,236,299,599,530,561,384,217,152,145,174,235,180,168,206,214,403,336,378,386,232,225,220,231,303,643,509,568,395,213,155,147,172,222,182,162,208,213],
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

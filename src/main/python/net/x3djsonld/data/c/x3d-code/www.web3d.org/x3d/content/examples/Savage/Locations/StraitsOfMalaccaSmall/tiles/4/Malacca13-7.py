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
        texture=ImageTexture(url=['../../images/4/Malacca13-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.661298515593056,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[403,336,378,386,232,225,220,231,303,643,509,568,395,213,155,147,172,222,182,162,208,213,375,366,367,343,192,223,258,289,260,549,421,827,699,216,268,147,184,208,235,239,209,229,303,453,327,380,207,198,234,267,207,587,523,581,835,314,181,154,167,157,230,182,224,305,294,312,283,363,220,188,245,336,210,461,447,403,950,277,292,162,234,190,185,222,278,409,256,316,223,358,255,225,256,335,242,380,384,392,575,295,261,155,225,227,268,224,418,536,363,374,195,227,288,199,228,437,337,363,423,353,483,361,179,173,191,237,205,304,686,731,421,214,198,200,259,207,278,469,245,278,493,343,478,411,229,178,225,394,379,390,490,740,244,215,218,241,278,217,309,306,214,150,295,214,408,438,376,186,245,265,544,620,665,800,408,514,286,215,366,264,363,259,238,245,296,150,437,266,199,216,218,261,287,957,1091,1023,367,462,305,206,296,247,325,237,293,223,276,128,317,267,193,194,203,306,495,1078,1064,1452,439,864,301,202,268,242,280,224,203,164,161,130,190,191,181,170,156,249,396,909,837,1274,466,709,263,186,241,184,274,292,208,240,389,192,113,124,285,349,171,406,614,702,666,1227,484,711,238,175,260,214,254,310,266,296,305,302,139,139,331,403,146,208,361,788,861,1054,425,500,244,268,199,209,272,242,181,288,457,468,171,119,130,151,196,636,1002,572,885,598,372,459,255,206,192,150,272,336,195,498,863,640,103,120,115,138,316,723,1491,328,597,499,319,330,228,252,244,159,218,351,306,315,506,272,151,119,153,328,696,910,1031,491,299,300,248,366,240,208,190,167,212,487,172,170,185,122,108,96,215,460,496,358,577,613,164,177,355,283,249,146,153,189,195,147,192,161,147,133,134,121,134,163,186,340,438,423,183,143,340,391,307,280,192,154,173,324,184,171,219,146,171,125,199,118,136,225,168,184,225,179,419,423,349,232,166,203,260,421,390,234,159,123,99,125,126,92,116,195,172,235,501,213,511,469,250,199,152,179,353,422,503,322,132,128,129,133,114,87,137,118,169,247,176,184,419,445,224,207,191,200,343,413,541,499,316,153,130,100,104,117,86,98,125,118,175,137,395,452,247,223,184,175,349,412,531,504,334,142,135,98,117,115,89,94,135,117,191,157],
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

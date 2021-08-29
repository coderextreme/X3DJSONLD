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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[182,177,184,194,204,253,264,296,269,309,365,408,452,523,379,421,529,495,400,327,405,329,168,286,255,320,207,219,264,290,277,272,335,356,422,423,403,440,525,524,394,314,326,298,181,334,447,426,261,230,256,302,270,330,288,310,381,411,501,414,446,541,392,279,225,241,233,341,529,538,333,215,239,222,294,416,338,315,323,411,388,475,421,519,490,373,234,213,164,252,356,341,315,214,253,220,224,263,401,415,339,346,415,446,433,477,480,382,255,215,145,160,225,214,241,284,214,250,211,257,406,421,403,353,366,397,457,495,353,256,207,193,140,184,275,168,203,279,187,210,195,287,319,347,430,389,387,381,390,411,409,295,193,188,135,148,155,201,166,169,178,188,198,220,296,292,402,417,470,426,474,391,374,297,232,177,128,141,142,152,160,167,179,187,201,210,251,287,401,444,441,507,495,449,253,251,212,169,126,134,160,324,166,168,178,188,241,294,228,271,300,491,470,498,545,518,301,374,193,174,132,145,217,285,200,204,199,240,293,384,260,292,387,528,504,479,551,477,361,314,253,186,171,171,319,270,225,222,194,226,331,410,291,264,348,445,446,463,587,454,303,231,229,187,149,229,234,238,220,221,199,228,319,281,268,288,302,354,361,420,450,441,402,306,287,261,150,186,329,380,311,208,197,225,227,262,278,286,278,298,390,577,467,349,364,334,232,215,150,164,310,389,290,226,194,223,217,222,265,274,262,360,435,461,423,309,328,422,266,208,211,265,211,366,367,298,190,212,201,232,399,333,271,338,309,294,280,248,321,405,447,381,218,196,188,203,265,264,188,190,207,229,409,285,259,299,281,307,362,235,296,337,396,411,125,205,166,170,186,178,176,190,221,237,339,247,273,449,318,335,358,336,209,262,379,419,120,182,159,178,158,169,174,191,217,275,341,314,253,387,346,334,347,321,226,251,315,371,130,122,180,159,158,166,168,173,181,197,222,258,337,485,451,306,366,374,296,247,176,264,264,135,189,149,159,169,159,170,179,196,184,195,290,442,428,292,382,435,375,397,202,138,325,267,143,220,143,174,157,165,168,169,219,202,245,305,245,323,328,408,470,502,352,204,325,270,144,220,141,174,158,164,164,169,228,206,240,296,245,336,319,412,477,502,330,208],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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

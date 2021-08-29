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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure04_08aTextMoreLineSpacing.x3d',name='title'),
    meta(content='Figure 4.8a, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch04/04fig08a.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='6 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Text with more-than-default spacing between lines. Compare with Figure 4.8b.',name='description'),
    meta(content='Figure04_08bTextLessLineSpacing.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter04Text/Figure04_08aTextMoreLineSpacing.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure04_08aTextMoreLineSpacing.x3d'),
    Shape(
      #  When attribute values are not specified, the default values from the X3D and VRML97 Specifications are used. 
      appearance=Appearance(
        material=Material(emissiveColor=(1,0,0))),
      geometry=Text(string=["Qwerty","123456"],
        fontStyle=FontStyle(spacing=2)))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure04_08aTextMoreLineSpacing.py")

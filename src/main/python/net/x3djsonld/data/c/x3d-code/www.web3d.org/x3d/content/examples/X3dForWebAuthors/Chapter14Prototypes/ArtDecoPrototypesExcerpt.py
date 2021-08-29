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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ArtDecoPrototypesExcerpt.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples. Excerpted from original.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  note some url addresses changed to reference local excerpt 
    children=[
    WorldInfo(title='ArtDecoPrototypesExcerpt.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.282435,0.085159,0.134462),shininess=0.127273,specularColor=(0.276305,0.11431,0.139857))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.685208,0.134679,0.332385),shininess=0.071429,specularColor=(0.122449,0.050035,0.050035))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco02',
      #  computed conversion ambientIntensity=1.745282, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.536861,0.0529,0.245479),shininess=0.832432,specularColor=(0.805292,0.765198,0.747416))])),
    Anchor(description='ArtDecoPrototypeExample',parameter=["target=_blank"],url=["ArtDecoExamplesExcerpt.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d"],
      children=[
      Shape(
        appearance=Appearance(
          #  replace Material node with a corresponding Prototype 
          material=ProtoInstance(name='ArtDeco00')),
        geometry=Text(string=["ArtDecoPrototypesExcerpt.x3d","is a Materials Prototype declaration file.","","For an example scene using these nodes,","click this text and view","ArtDecoExamplesExcerpt.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ArtDecoPrototypesExcerpt.py")

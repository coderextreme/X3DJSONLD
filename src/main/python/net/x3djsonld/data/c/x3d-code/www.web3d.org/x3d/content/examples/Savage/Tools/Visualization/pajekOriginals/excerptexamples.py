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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='*enter FileNameWithNoAbbreviations.x3d here*',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='*enter name of original author here*',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='*enter date of translation here*',name='translated'),
    meta(content='*enter date of latest revision here*',name='modified'),
    meta(content='*enter version here, if any*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter reference resource here if required to support function, delivery, or coherence of content*',name='requires'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter image filename/url here*',name='Image'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter subject keywords here*',name='subject'),
    meta(content='*enter permission statements or url here*',name='accessRights'),
    meta(content='*insert any known warnings, bugs or errors here*',name='warning'),
    meta(content='*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1.0000,1.0000,1.0000)]),
    Transform(rotation=(-11.22472,0.00000,52.81325,2.15598),translation=(-0.35062,-0.44066,-0.60713),
      children=[
      Shape(
        #  Arc 1.24 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=0.64770,radius=0.02000))]),
    Transform(rotation=(-11.22472,0.00000,52.81325,2.15598),translation=(-0.48422,-0.53116,-0.63552),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-53.23500,0.00000,8.51149,0.43344),translation=(-0.12911,0.32068,-0.81718),
      children=[
      Shape(
        #  Arc 1.26 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.28361,radius=0.02000))]),
    Transform(rotation=(-53.23500,0.00000,8.51149,0.43344),translation=(-0.16106,0.75793,-1.01700),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Transform(rotation=(-95.76386,0.00000,53.68924,1.79233),translation=(-0.35500,-0.38541,-1.02982),
      children=[
      Shape(
        #  Arc 1.39 
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cylinder(height=1.12537,radius=0.02000))]),
    Transform(rotation=(-95.76386,0.00000,53.68924,1.79233),translation=(-0.54712,-0.47389,-1.37249),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
        geometry=Cone(bottomRadius=0.06000,height=0.10000))]),
    Anchor(description='1: 2010-01-15-ARMY.MIL',
      children=[
      Transform(translation=(-0.08656,-0.26178,-0.55101),
        children=[
        Shape(
          #  Vertex 1 
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.06344,-0.26178,-0.55101),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-ARMY.MIL'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='2: 2010-01-15-BLOGS.STATE.GOV-INDEX.PHP',
      children=[
      Transform(translation=(1.28526,1.19707,0.67279),
        children=[
        Shape(
          #  Vertex 2 
          appearance=Appearance(
            material=Material(diffuseColor=(0.5020,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(1.43526,1.19707,0.67279),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-BLOGS.STATE.GOV-INDEX.PHP'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])]),
    Anchor(description='3: 2010-01-15-FEEDS.FEEDBURNER.COM-DIPNOTE',
      children=[
      Transform(translation=(-0.06623,1.98542,-1.19849),
        children=[
        Shape(
          #  Vertex 3 
          appearance=Appearance(
            material=Material(diffuseColor=(1.0000,0.0000,0.0000))),
          geometry=Sphere(radius=0.1500))]),
      Transform(translation=(0.08377,1.98542,-1.19849),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0000,0.0000,0.0000))),
          geometry=Text(string=['2010-01-15-FEEDS.FEEDBURNER.COM-DIPNOTE'],
            fontStyle=FontStyle(family=['Arial Unicode MS'],size=0.20000)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for *enter FileNameWithNoAbbreviations.py")

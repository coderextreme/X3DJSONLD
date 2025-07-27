	function HAnimScale() {
            this.x = 0;
            this.y = 0;
            this.l_x = 0;
            this.l_z = 0;
            this.r_x = 0;
            this.r_z = 0;
            this.maxy = 0;
            this.z = 0;
            this.scale = [1, 1, 1];
            this.yscale = 1;
	    this.X3D0 = document.querySelector("Scene");
            this.humanoids = [];
	    if (typeof this.X3D0 !== 'undefined') {
            	this.traverseChildrenSceneGraph(this.X3D0.children, this.humanoids);
            }
            for (let h = 0; h < this.humanoids.length; h++) {
                    let humanoid = this.humanoids[h];
                    this.scale = humanoid.getScale();
                    humanoid.setScale([ 1, 1, 1 ]);
                    let root = humanoid.skeleton;
                    let center = root.center;
                    this.x = center[0];
                    this.y = center[1];
                    this.maxy = center[1];
                    this.z = center[2];
                    let translation = [0, 0, 0];
                    this.centering(root);
                    this.x = (this.l_x + this.r_x) / 2;
                    this.z = (this.l_z + this.r_z) / 2;
                    this.yscale = this.maxy - this.y;
                    this.transform(root, translation);
                    this.x = 0;
                    this.y = 0;
                    this.l_x = 0;
                    this.l_z = 0;
                    this.r_x = 0;
                    this.r_z = 0;
                    this.maxy = 0;
                    this.z = 0;
                    this.scale = [ 1, 1, 1 ];
                    this.yscale = 1;
            }
            this.humanoids = [];
    }

    HAnimScale.prototype = {
        traverseChildrenSceneGraph: function(children, humanoids) {
                if (children !== null) {
                        for (let ch = 0; ch < children.length; ch++) {
                                let child = children[ch];
                                if (!this.traverseChildSceneGraph(child, humanoids)) {
                                        console.error("Unpacking child in", child, "failed");
                                }
                        }
                        return true;
                }
                return false;
        },

        traverseChildSceneGraph: function(child, humanoids) {
                let children = null;
                if (child.localName === 'hanimjoint') {
                        let joint = child;
                        let children = joint.children;
                        this.traverseChildrenSceneGraph(children, humanoids);
                } else if (child.localName === 'hanimsite') {
                        let site = child;
                        let children = site.children;
                        this.traverseChildrenSceneGraph(children, humanoids);
                } else if (child.localName === 'hanimsegment') {
                        let segment = child;
                        let children = segment.children;
                        this.traverseChildrenSceneGraph(children, humanoids);
                } else if (child.localName === 'scene') {
                        let scene = child;
                        let children = scene.children;
                        this.traverseChildrenSceneGraph(children, humanoids);
                } else if (child.localName === 'group') {
                        let group = child;
                        let children = group.children;
                        this.traverseChildrenSceneGraph(children, humanoids);
                } else if (child.localName === 'transform') {
                        let trans = child;
                        let children = trans.children;
                        this.traverseChildrenSceneGraph(children, humanoids);
                } else if (child.localName === 'shape') {
                        let shape = child;
                        let appearance = shape.getAppearance();
                        if (!this.traverseChildSceneGraph(appearance, humanoids)) {
                                console.error("Unpacking appearance in Shape failed");
                        }
                        let geometry = shape.getGeometry();
                        if (!this.traverseChildSceneGraph(geometry, humanoids)) {
                                console.error("Unpacking geometry in Shape failed");
                        }
                } else if (child.localName === 'indexedfaceset') {
                        let ifs = child;
                        let coord = ifs.getCoord();
                        if (!this.traverseChildSceneGraph(coord, humanoids)) {
                                console.error("Unpacking coord in IndexedFaceSet failed");
                        }
                } else if (child.localName === 'appearance') {
                } else if (child.localName === 'coordinate') {
                } else if (child.localName === 'worldInfo') {
                } else if (child.localName === 'navigationinfo') {
                } else if (child.localName === 'viewpoint') {
                } else if (child.localName === 'worldinfo') {
                } else if (child.localName === 'p') {
                } else if (child.localName === 'script') {
                } else if (child.localName === 'hanimhumanoid') {
                        humanoids.add(child);
                } else if (child !== null) {
                        console.error("Unhandled is", child.localName, child);
                } else {
                	console.log("child is", child.localName, child);
                        return false;
                }
                return true;
        },
        centering: function(joint) {
                let center = joint.getCenter();
                let name = joint.getName();
                switch (name) {
                        case "l_tarsal_distal_interphalangeal_5":
                                this.l_x = center[0];
                                this.l_z = center[2];
                                break;
                        case "r_tarsal_distal_interphalangeal_5":
                                this.r_x = center[0];
                                this.r_z = center[2];
                                break;
                }
                if (center[1] > this.maxy) {
                        this.maxy = center[1];
                }
                if (center[1] < this.y) {
                        this.y = center[1];
                }
                let children = joint.children;
                for (let ch = 0; ch < children.size(); ch++) {
                        let child = children[ch];
                        if (child.localName === 'hanimjoint') {
                                centering(child);
                        }
                }
        },
        transformPoint: function(point, point_offset, translation) {
                /// console.error("OLD "+point[point_offset+0]+" "+point[point_offset+1]+" "+point[point_offset+2]+" ");
                point[point_offset+0] -= this.x;
                point[point_offset+1] -= this.y;
                point[point_offset+2] -= this.z;

                point[point_offset+0] *= this.scale[0];
                point[point_offset+1] *= this.scale[1];
                point[point_offset+2] *= this.scale[2];

                point[point_offset+0] += translation[0];
                point[point_offset+1] += translation[1];
                point[point_offset+2] += translation[2];
                // console.error("NEW "+point[point_offset+0]+" "+point[point_offset+1]+" "+point[point_offset+2]+" ");
        },
        transform: function(node, parentTranslation) {
                let translation = [parentTranslation[0], parentTranslation[1], parentTranslation[2]];
                let children = null;
                if (node.localName === 'hanimjoint') {
                        let joint = node;

                        let field = joint.getTranslation();
                        this.transformPoint(field, 0, [ 0, 0, 0 ]);
                        this.transformPoint(translation, 0, field);
                        joint.setTranslation([ 0, 0, 0 ]);

                        let center = joint.getCenter();
                        this.transformPoint(center, 0, translation);
                        joint.setCenter(center);
                        children = joint.children;
                } else if (node.localName === 'hanimsite') {
                        let site = node;

                        let field = site.getTranslation();
                        this.transformPoint(field, 0, [ 0, 0, 0]);
                        this.transformPoint(translation, 0, field);
                        site.setTranslation([0, 0, 0]);

                        let center = site.getCenter();
                        this.transformPoint(center, 0, translation);
                        site.setCenter(center);

                        children = site.children;
                } else if (node.localName === 'hanimsegment') {
                        let segment = node;
                        let coord = segment.getCoord();
                        if (coord !== null) {
                                if (!this.transform(coord, translation)) {
                                        console.error("Unpacking coord in HAnimSegment failed");
                                }
                        }
                        let displacers = segment.getDisplacersList();
                        if (displacers !== null) {
                                for (let di = 0; di < displacers.size(); di++) {
                                        let displacer = displacers.get(di);
                                        if (!this.transform(displacer, translation)) {
                                                console.error("Unpacking displacer in HAnimSegment failed");
                                        }
                                }
                        }
                        children = segment.children;
                } else if (node.localName === 'transform') {
                        let trans = node;
                        let field = trans.getTranslation();
                        this.transformPoint(field, 0, [0,0,0]);
                        this.transformPoint(translation, 0, field);
                        trans.setTranslation([0,0,0]);
                        children = trans.children;
                } else if (node.localName === 'shape') {
                        let shape = node;
                        let appearance = shape.getAppearance();
                        if (!this.transform(appearance, translation)) {
                                console.error("Unpacking appearance in Shape failed");
                        }
                        let geometry = shape.getGeometry();
                        if (!this.transform(geometry, translation)) {
                                console.error("Unpacking geometry in Shape failed");
                        }
                } else if (node.localName === 'indexedfaceset') {
                        let ifs = node;
                        let coord = ifs.getCoord();
                        let coordIndex = ifs.getCoordIndex();
                        if (coordIndex.length > 700) {
                                console.error("coordIndex", coordIndex.length);
                                let texCoordIndex = ifs.getTexCoordIndex();
                                console.error("texCoordIndex", texCoordIndex.length);
                        }
                        if (!this.transform(coord, translation)) {
                                console.error("Unpacking coord in IndexedFaceSet failed");
                        }
                } else if (node.localName === 'appearance') {
                } else if (node.localName === 'coordinate') {
                        let coordinate = node;
                        let point = coordinate.getPoint();
                        // console.error("point ", point.length);
                        for (let p = 0; p < point.length; p += 3) {
                                this.transformPoint(point, p, translation);
                        }
                        coordinate.setPoint(point);
                } else if (node !== null) {
                        console.error("Unhandled is", node);
                } else {
                        console.error("Node is", node);
                        return false;
                }
                if (children !== null) {
                        for (let ch = 0; ch < children.size(); ch++) {
                                let child = children.get(ch);
                                if (!this.transform(child, translation)) {
                                        console.error("Unpacking child in", node, "failed");
                                }
                        }
                }
                return true;
        }
    }
    function X3D() {
        new HAnimScale();
    }
    function initialize() {
        new HAnimScale();
    }
